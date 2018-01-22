//
// Created by Hanna on 17/01/2018.
//
#include "Node.h"

#ifndef LAB1_GEOMETRY_H
#define LAB1_GEOMETRY_H

#include <glm/glm.hpp>


class Geometry : public Node {

public:
    typedef std::vector<glm::vec2> vec2Vector;
    typedef std::vector<glm::vec3> vec3Vector;
    typedef std::vector<glm::vec4> vec4Vector;
    typedef std::vector<GLushort> GLushortVector;

    vec4Vector vertices;
    vec3Vector normals;
    vec2Vector textureCoord;
    vec3Vector vertexColors;
    GLushortVector elements; // ???

    // INIT?
    Geometry();
    ~Geometry();

    void draw(GLuint program, const glm::mat4& modelMatrix);

private:
    GLuint m_vbo_vertices, m_vbo_normals, m_ibo_elements;
    GLint m_attribute_v_coord;
    GLint m_attribute_v_normal;

    GLint m_uniform_m;
    GLint m_uniform_m_3x3_inv_transp;

    // Contain all geometry data (local coord system):
    // Vertices
    // Normals
    // Texture coord (multiple layers)
    // Vertex colours (if present)

    // DRAM METHOD gl-funcitonality to draw geometry
};


#endif //LAB1_GEOMETRY_H
