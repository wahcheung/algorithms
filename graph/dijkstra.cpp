/**
 * @file dijkstra.cpp
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2020-01-02
 */

#include "graph/dijkstra.h"

#include <climits>
#include <queue>

namespace algo {
namespace graph {

using std::pair;
using std::priority_queue;
using std::vector;

// <vertex, cost>
typedef pair<int, int> VertexCostPair;

struct cmp {
  bool operator()(const VertexCostPair& left,
                  const VertexCostPair& right) const {
    return left.second >= right.second;
  }
};

vector<int> Dijkstra(vector<vector<int>>& adjacency, int src) {
  const int num_vertices = adjacency.size();
  vector<int> vertex_cost(num_vertices, INT_MAX);

  priority_queue<VertexCostPair, vector<VertexCostPair>, cmp> cost_queue;
  cost_queue.emplace(src, 0);

  while (!cost_queue.empty()) {
    auto cur_vertex = cost_queue.top().first;
    auto cur_vertex_cost = cost_queue.top().second;
    cost_queue.pop();
    if (cur_vertex_cost < vertex_cost[cur_vertex]) {
      vertex_cost[cur_vertex] = cur_vertex_cost;
    }
    for (int next = 0; next < num_vertices; ++next) {
      if (adjacency[cur_vertex][next] == INT_MAX) {
        continue;
      }
      if (cur_vertex_cost + adjacency[cur_vertex][next] < vertex_cost[next]) {
        vertex_cost[next] = cur_vertex_cost + adjacency[cur_vertex][next];
        cost_queue.emplace(next, vertex_cost[next]);
      }
    }
  }

  return vertex_cost;
}

}  // namespace graph
}  // namespace algo
