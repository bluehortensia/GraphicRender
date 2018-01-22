//
// Created by Hanna on 17/01/2018.
//

#include "Node.h"

#ifndef LAB1_GROUP_H
#define LAB1_GROUP_H


class Group : public Node {
public:
    void accept(Visitor &v);
    void add(std::vector<std::shared_ptr<Node>> n);
    NodeVector& getNodes();

private:
    NodeVector m_nodes;
    // Contain any number of nodes
};


#endif //LAB1_GROUP_H
