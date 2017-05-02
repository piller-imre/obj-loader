#include "model.h"

#define LINE_BUFFER_SIZE 1024

int load_model(struct Model *model, const char *filename)
{
    FILE* obj_file;
    struct ModelInfo model_info;

    obj_file = fopen(filename, "r");
    if (obj_file == NULL) {
        printf("ERROR: Unable to open '%s' file!\n", filename);
        return FALSE;
    }

    collect_model_info(&model_info, obj_file);

    // TODO: Initialize model structure according to the model info!
    // TODO: Collect model data!

    fclose(obj_file);
    return TRUE;
}

void collect_model_info(struct ModelInfo *model_info, FILE *obj_file)
{
    char line[LINE_BUFFER_SIZE];

    init_model_info(&model_info);
    fseek(obj_file, 0, SEEK_SET);
    while (fgets(line, LINE_BUFFER_SIZE, obj_file) != NULL) {
        update_model_info(&model_info, line);
    }
}

void free_model(struct Model *model)
{
    // TODO: Free the model data!
}
