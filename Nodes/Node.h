//
// Created by Hanna on 17/01/2018.
//

#ifndef LAB1_NODE_H
#define LAB1_NODE_H

#include "StateData/State.h"

class Node {

public:
    Node();
    ~Node();

    virtual void accept(class NodeVisitior &v) = 0;

    void setState(class State &s);

private:
    State m_current_state;

    // Abstract
    // Accept visitors
    // Set state
    // Virtual?
};

typedef std::vector<std::shared_ptr<Node>> NodeVector;


#endif //LAB1_NODE_H
