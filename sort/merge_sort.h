/**
 * @file merge_sort.h
 * @brief https://www.toptal.com/developers/sorting-algorithms/merge-sort
 * @author huachang.gong
 * @version 0.1
 * @date 2019-05-21
 */

#ifndef SORT_MERGE_SORT_H_
#define SORT_MERGE_SORT_H_

#include "util/print.h"

namespace algo {

/**
 * @brief Merge two sorted parts of an array, i.e., [left, mid) and [mid, right)
 */
template<typename ValueType>
void Merge(ValueType nums[], const int left, const int mid, const int right) {
  ValueType merge_nums[right - left];
  int pos = 0, lpos = left, rpos = mid;
  while (lpos < mid && rpos < right) {
    if (nums[lpos] <= nums[rpos]) {
      merge_nums[pos] = nums[lpos];
      ++lpos;
    } else {
      merge_nums[pos] = nums[rpos];
      ++rpos;
    }
    ++pos;
  }
  while (lpos < mid) {
    merge_nums[pos] = nums[lpos];
    ++lpos;
    ++pos;
  }
  while (rpos < right) {
    merge_nums[pos] = nums[rpos];
    ++rpos;
    ++pos;
  }
  for (int i = left; i < right - left; ++i) {
    nums[i] = merge_nums[i];
  }
}

/**
 * @brief Merge sort
 *
 * @tparam ValueType
 * @param nums[] The input array to be sorted.
 * @param size Size of the input array, i.e., size of nums.
 */
template<typename ValueType>
void MergeSort(ValueType nums[], const int size) {
  if (size <= 1) {
    return;
  }
  int mid = size / 2;
  MergeSort(nums, mid);
  MergeSort(&nums[mid], size - mid);
  Merge(nums, 0, mid, size);
}

}  // namespace algo

#endif  // SORT_MERGE_SORT_H_
