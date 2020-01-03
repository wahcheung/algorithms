/**
 * @file insertion_sort.h
 * @brief https://www.toptal.com/developers/sorting-algorithms/insertion-sort
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-10
 */

#ifndef SORT_INSERTION_SORT_
#define SORT_INSERTION_SORT_

#include "util/print.h"

namespace algo {

template<typename ValueType>
void InsertionSort(ValueType nums[], const int size) {
  for (int i = 1; i < size; ++i) {
    ValueType cur = nums[i];
    int j = i;
    while (j > 0 && cur < nums[j - 1]) {
      nums[j] = nums[j - 1];
      --j;
    }
    nums[j] = cur;
  }
}

}  // namespace algo

#endif  // SORT_INSERTION_SORT_
