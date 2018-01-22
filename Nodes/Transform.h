//
// Created by Hanna on 17/01/2018.
//

#include "Group.h"
#include <glm/glm.hpp>

#ifndef LAB1_TRANSFORM_H
#define LAB1_TRANSFORM_H


class Transform : public Group {
public:
    glm::mat4 obj2world;

    void setInitialTransform(const glm::mat4& m);
    void applyTransform(const glm::mat4& m);
    void resetTransform();

private:
    glm::mat4 m_initialTransform;
    // Transform all nodes below (don't change vertice positions though)
};


#endif //LAB1_TRANSFORM_H
