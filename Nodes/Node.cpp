//
// Created by Hanna on 17/01/2018.
//

#include "Node.h"

Node::Node(){

}

Node::~Node(){

}

void Node::setState(struct State &s) {
    m_current_state = s;
}
