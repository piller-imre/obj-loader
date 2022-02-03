#ifndef PARSER_H
#define PARSER_H

#include "vertex.h"

#include <stdbool.h>


/**
 * The indices of the face points
 */
struct FacePointData
{
    int vertex_index;
    int texture_index;
    int normal_index;
};

/**
 * Representation of the face descriptor rows
 */
struct FaceData
{
    struct FacePointData points[3];
};

/**
 * Check that the line contains vertex data.
 */
bool is_vertex_data(const char* line);

/**
 * Check that the line contains normal data.
 */
bool is_normal_data(const char* line);

/**
 * Check that the line contains texture vertex data.
 */
bool is_texture_vertex_data(const char* line);

/**
 * Check that the line contains face data.
 */
bool is_face_data(const char* line);

/**
 * Read the vertex data from the line.
 */
void read_vertex_data(struct Vertex* vertex, const char* line);

/**
 * Read the normal data from the line.
 */
void read_normal_data(struct Vertex* normal, const char* line);

/**
 * Read the texture vertex data.
 */
void read_texture_vertex_data(struct TextureVertex* texture_vertex, const char* line);

/**
 * Read the face data.
 */
void read_face_data(struct FaceData* face_data, const char* line);

#endif /* PARSER_H */
