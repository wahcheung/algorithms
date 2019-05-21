/**
 * @file merge_sort_test.cpp
 * @brief
 * @author huachang.gong
 * @version 0.1
 * @date 2019-05-21
 */
#include "merge_sort.h"

#include <cstddef>

#include "util/print.h"
#include "util/random.h"

int main(int argc, char *argv[])
{
  const size_t kSize = algo::common::RandomInt(0, 10);
  int *nums = algo::common::RandomArray(kSize);
  algo::MergeSort(nums, kSize);
  algo::common::Print(nums, kSize);
  return 0;
}
