/**
 * @file merge_sort_test.cpp
 * @brief
 * @author huachang.gong
 * @version 0.1
 * @date 2019-05-21
 */

#include "sort/merge_sort.h"

#include "util/print.h"
#include "util/random.h"

int main(int argc, char *argv[]) {
  const int size = algo::common::RandomInt(0, 10);
  int *nums = algo::common::RandomArray(size);
  algo::MergeSort(nums, size);
  algo::common::Print(nums, size);
  return 0;
}
