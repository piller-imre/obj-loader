#ifndef MODEL_H
#define MODEL_H

#include "parser.h"
#include "vertex.h"

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
int load_model(const char* filename, struct Model* model);

/**
 * Release the allocated memory of the model.
 */
void free_model(struct Model* model);

#endif /* MODEL_H */
