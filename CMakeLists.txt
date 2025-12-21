cmake_minimum_required(VERSION 4.0)
project(group7)

set(CMAKE_CXX_STANDARD 20)

add_executable(group7 main.cpp
        include/graph/Graph.h
        include/graph/Edge.h
        include/graph/Bag.h
        src/graph/Graph.cpp
        include/util/Timer.h
        include/util/MinHeap.h)
