#ifndef MODEL_H
#define MODEL_H

#include "info.h"
#include "parser.h"
#include "vertex.h"

#include <stdio.h>

/**
 * Face point with vertex, texture and normal coordinates
 */
struct FacePoint
{
    struct Vertex* vertex;
    struct TextureVertex* texture_vertex;
    struct Vertex* normal;
};

/**
 * Represents a triangle
 */
struct Triangle
{
    struct FacePoint points[3];
    // TODO: Add material identifier!
};

/**
 * Represents the content of the OBJ file
 */
struct Model
{
    struct Triangle* triangles;
    int n_triangles;
};

/**
 * Load OBJ model from file.
 */
int load_model(struct Model* model, const char* filename);

/**
 * Collect model information from the OBJ file.
 */
void collect_model_info(struct ModelInfo* model_info, FILE* obj_file);

/**
 * Release the allocated memory of the model.
 */
void free_model(struct Model* model);

#endif /* MODEL_H */
