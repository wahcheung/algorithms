/**
 * @file bubble_sort.h
 * @brief https://www.toptal.com/developers/sorting-algorithms/bubble-sort
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */
#ifndef SORT_BUBBLE_SORT_H_
#define SORT_BUBBLE_SORT_H_

#include <cstddef>
#include <utility>

namespace algo {

template<typename ValueType>
void BubbleSort(ValueType nums[], size_t size) {
  bool swap_flag = false;
  for (size_t i = 0; i < size; ++i) {
    swap_flag = false;
    for (size_t j = size - 1; j > i; --j) {
      if (nums[j] < nums[j - 1]) {
        std::swap(nums[j], nums[j - 1]);
        swap_flag = true;
      }
    }
    if (!swap_flag) {
      return;
    }
  }
}

}  // namespace algo

#endif  // SORT_BUBBLE_SORT_H_
