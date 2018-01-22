//
// Created by Hanna on 17/01/2018.
//

#include "Transform.h"

void Transform::setInitialTransform(const glm::mat4& m){
    m_initialTransform = m;
}

void Transform::resetTransform(){
    obj2world = m_initialTransform;
}

void Transform::applyTransform(const glm::mat4& m){
    obj2world = m * obj2world;
}