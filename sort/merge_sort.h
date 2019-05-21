/**
 * @file merge_sort.h
 * @brief https://www.toptal.com/developers/sorting-algorithms/merge-sort
 * @author huachang.gong
 * @version 0.1
 * @date 2019-05-21
 */
#ifndef SORT_MERGE_SORT_H_
#define SORT_MERGE_SORT_H_

#include <cstddef>
#include "util/print.h"

namespace algo {

/**
 * @brief Merge two sorted parts of an array, i.e., [left, mid) and [mid, right)
 */
template<typename ValueType>
void Merge(ValueType nums[], const size_t left, const size_t mid, const size_t right) {
  ValueType merge_nums[right - left];
  size_t pos = 0, lpos = left, rpos = mid;
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
  for (size_t i = left; i < right - left; ++i) {
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
void MergeSort(ValueType nums[], const size_t size) {
  if (size <= 1) {
    return;
  }
  size_t mid = size / 2;
  MergeSort(nums, mid);
  MergeSort(&nums[mid], size - mid);
  Merge(nums, 0, mid, size);
}

}  // namespace algo

#endif  // SORT_MERGE_SORT_H_
