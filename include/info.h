#ifndef INFO_H
#define INFO_H

/**
 * Information about the model
 */
struct ModelInfo
{
    int n_vertices;
    int n_texture_vertices;
    int n_normals;
    int n_triangles;
};

/**
 * Initialize the model info structure
 */
void init_model_info(struct ModelInfo* model_info);

/**
 * Update the model info by examining the given line.
 */
void update_model_info(struct ModelInfo* model_info, const char* line);

#endif /* INFO_H */
