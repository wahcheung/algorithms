/**
 * @file print.h
 * @brief
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */
#ifndef UTIL_PRINT_H_
#define UTIL_PRINT_H_

#include <cstddef>
#include <iostream>
#include <vector>

namespace algo {
namespace common {

/**
 * @brief Print array in proper format.
 */
template <typename ValueType>
void Print(const ValueType array[], const int size) {
  std::cout << "array: [";
  for (int i = 0; i < size; ++i) {
    std::cout << array[i] << ", ";
  }
  if (size != 0) {
    std::cout << "\b\b";
  }
  std::cout << "]" << std::endl;
}

/**
 * @brief Print std::vector in proper format.
 */
template <typename ValueType>
void Print(const std::vector<ValueType>& array) {
  std::cout << "vector: [";
  for (int i = 0; i < array.size(); ++i) {
    std::cout << array[i] << ", ";
  }
  if (!array.empty()) {
    std::cout << "\b\b";
  }
  std::cout << "]" << std::endl;
}

}  // namespace common
}  // namespace algo

#endif  // UTIL_PRINT_H_
