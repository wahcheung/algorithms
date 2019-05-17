/**
 * @file insertion_sort_test.cpp
 * @brief
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */
#include "insertion_sort.h"

#include <cstddef>
#include <iostream>

#include "util/print.h"
#include "util/random.h"

int main (int argc, char const *argv[]) {
  const size_t kSize = algo::common::RandomInt(0, 10);
  int *nums = algo::common::RandomArray(kSize);
  algo::InsertionSort(nums, kSize);
  algo::common::Print(nums, kSize);
  return 0;
}
