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

namespace algo {
namespace common {

/**
 * @brief Print the array in proper format.
 */
template <typename ValueType>
void Print(const ValueType array[], const size_t size) {
  std::cout << "array: ";
  if (size == 0) {
    std::cout << "[]" << std::endl;
    return;
  }
  std::cout << "[";
  for (size_t i = 0; i < size - 1; ++i) {
    std::cout << array[i] << ", ";
  }
  std::cout << array[size - 1];
  std::cout << "]" << std::endl;
}

}  // namespace common
}  // namespace algo

#endif  // UTIL_PRINT_H_
