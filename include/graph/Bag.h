//
// Created by Patrick Martin on 12/12/25.
//

#ifndef GROUP7_BAG_H
#define GROUP7_BAG_H
#include <vector>

#include "Edge.h"

class Bag {
    using AdjList = std::vector<Edge>;
public:
    explicit Bag(unsigned long id, AdjList& adj_list);

    std::vector<int> get_vertices();
private:
    unsigned long root;

    AdjList& adj;
};

#endif //GROUP7_BAG_H