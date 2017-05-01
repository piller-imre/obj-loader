#ifndef MODEL_H
#define MODEL_H

/**
 * Spatial point in Descartes coordinate system
 */
struct Vertex
{
    double x;
    double y;
    double z;
};

/**
 * Texture vertex with (u, v) coordinates
 */
struct TextureVertex
{
    double u;
    double v;
};

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
 * Represents the content of the OBJ file
 */
struct Model
{
    struct Triangle* triangles;
    int n_triangles;
};

#endif /* MODEL_H */

