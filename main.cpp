#include <iostream>

#include "include/graph/Graph.h"
#include "include/util/Timer.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    Graph minnesota = Graph::from_mtx("mtx/road-minnesota.mtx", false, false);
    auto t = Timer();

    t.start();
    const std::vector<unsigned long> order = minnesota.bfs_traversal(7);
    t.stop();

    std::cout << "BFS time elapsed: " << t.elapsed() << " with size " << order.size() << std::endl;
    t.reset();

    t.start();
    auto td_metrics = minnesota.get_td();
    t.stop();

    std::cout << "Tree decomposition time elapsed: " << t.elapsed() << std::endl;
    std::cout << "Treewidth: " << Graph::treewidth(std::get<1>(td_metrics));

    return 0;
}