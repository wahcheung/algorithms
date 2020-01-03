/**
 * @file selection_sort_test.cpp
 * @brief
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */

#include "sort/selection_sort.h"

#include "util/print.h"
#include "util/random.h"

int main (int argc, char const *argv[]) {
  const int size = algo::common::RandomInt(0, 10);
  int *nums = algo::common::RandomArray(size);
  algo::SelectionSort(nums, size);
  algo::common::Print(nums, size);
  return 0;
}
