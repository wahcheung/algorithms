/**
 * @file dijkstra.h
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2020-01-02
 */

#ifndef GRAPH_DIJKSTRA_H_
#define GRAPH_DIJKSTRA_H_

#include <vector>

namespace algo {
namespace graph {

/**
 * @brief Dijkstra's single source shortest path algorithm.
 *
 * @param adjacency Adjacency matrix representation of the graph.
 * @param src Source vertex.
 *
 * @return Shortest path length from source vertex to all vertices.
 */
std::vector<int> Dijkstra(std::vector<std::vector<int>>& adjacency, int src);

}  // namespace graph
}  // namespace algo

#endif  // GRAPH_DIJKSTRA_H_
