/**
 * @file selection_sort.h
 * @brief https://www.toptal.com/developers/sorting-algorithms/selection-sort
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */

#ifndef SORT_SELECTION_SORT_H_
#define SORT_SELECTION_SORT_H_

#include <utility>

namespace algo {

/**
 * @brief Selection sort
 *
 * @tparam ValueType Value type template
 * @param nums[] The input array to be sorted.
 * @param size Size of the input array, i.e., size of nums.
 */
template<typename ValueType>
void SelectionSort(ValueType nums[], const int size) {
  int min_idx;
  for (int i = 0; i < size; ++i) {
    min_idx = i;
    for (int j = i + 1; j < size; ++j) {
      if (nums[j] < nums[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      std::swap(nums[i], nums[min_idx]);
    }
  }
}

}  // namespace algo

#endif  // SORT_SELECTION_SORT_H_

