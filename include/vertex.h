#ifndef VERTEX_H
#define VERTEX_H

#define FALSE 0
#define TRUE 1

typedef int Boolean;

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

#endif /* VERTEX_H */
