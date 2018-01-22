//
// Created by Hanna on 17/01/2018.
//

#include "Group.h"

void Group::add(std::vector <std::shared_ptr<Node>> n) {
    m_nodes.insert(std::end(m_nodes), std::begin(n), std::end(n));
}

NodeVector& Group::getNodes(){
    return m_nodes&;
}
