//
// Created by Hanna on 17/01/2018.
//

#include "NodeVisitor.h"

#ifndef LAB1_RENDERVISITOR_H
#define LAB1_RENDERVISITOR_H


class RenderVisitor : public NodeVisitor {
    // Traverse schenegraph and apply states and transformtions
    // and draw geometries when reached. Don't modify. Puch model matrixes onto stack instead
    // each drawable object will get its own model transform
    // pop stack when leaving transformation node
};


#endif //LAB1_RENDERVISITOR_H
