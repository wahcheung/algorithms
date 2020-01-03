/**
 * @file random_test.cpp
 * @brief 
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */

#include "util/random.h"
#include "util/print.h"

using namespace std;

int main(int argc, char *argv[]) {
  const size_t size = algo::common::RandomInt(0, 10);
  int *array = new int[size];
  algo::common::RandomArray(array, size, 0, 100);
  algo::common::Print(array, size);
  delete[] array;
  return 0;
}
