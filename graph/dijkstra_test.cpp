/**
 * @file dijkstra.cpp
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2020-01-03
 */

#include "graph/dijkstra.h"

#include <climits>
#include <vector>

#include "util/print.h"

using std::vector;

int main(int argc, char const *argv[]) {
  vector<vector<int>> adjacency_matrix = {
      {0, 4, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 8, INT_MAX},
      {4, 0, 8, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 11, INT_MAX},
      {INT_MAX, 8, 0, 7, INT_MAX, 4, INT_MAX, INT_MAX, 2},
      {INT_MAX, INT_MAX, 7, 0, 9, 14, INT_MAX, INT_MAX, INT_MAX},
      {INT_MAX, INT_MAX, INT_MAX, 9, 0, 10, INT_MAX, INT_MAX, INT_MAX},
      {INT_MAX, INT_MAX, 4, 14, 10, 0, 2, INT_MAX, INT_MAX},
      {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 2, 0, 1, 6},
      {8, 11, INT_MAX, INT_MAX, INT_MAX, INT_MAX, 1, 0, 7},
      {INT_MAX, INT_MAX, 2, INT_MAX, INT_MAX, INT_MAX, 6, 7, 0}};
  
  vector<int> path_cost = algo::graph::Dijkstra(adjacency_matrix, 0);
  algo::common::Print(path_cost);
}
