/**
 * @file random.cpp
 * @brief
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */

#include "util/random.h"

#include <cassert>

namespace algo {
namespace common {

int RandomInt(const int start, const int end, unsigned int seed) {
  if (start >= end) {
    return start;
  }
  srand(seed);
  return start + rand() % (end - start + 1);
}

void RandomArray(int array[], const size_t size, const int start, const int end, unsigned int seed) {
  assert(start <= end);
  srand(seed);
  for (size_t i = 0; i < size; ++i) {
    array[i] = start + rand() % (end - start + 1);
  }
}

int* RandomArray(const size_t size, const int start, const int end, unsigned int seed) {
  int *array = new int[size];
  RandomArray(array, size, start, end, seed);
  return array;
}

}  // namespace common
}  // namespace algo
