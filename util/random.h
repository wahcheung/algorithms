/**
 * @file random.h
 * @brief
 * @author huachang.gong <huachang.gong@outlook.com>
 * @version 0.1
 * @date 2019-05-09
 */
#ifndef UTIL_RANDOM_H_
#define UTIL_RANDOM_H_

#include <cstdlib>
#include <ctime>

namespace algo {
namespace common {

#define MAX_RAND 1000

/**
 * @brief Get a random integer between two integer values by a random seed.
 *
 * @param start The lower bound of the random integer.
 * @param end The upper bound of the random integer.
 * @param seed The random seed.
 *
 * @return A random integer between start and end based on the input random seed.
 */
int RandomInt(const int start = 0, const int end = MAX_RAND, unsigned int seed = time(NULL));

/**
 * @brief Generate a random array whose elements are in range of [start, end].
 *
 * @param array[] The generated random array.
 * @param size The size of the input array.
 * @param start The lower bound of the random integer for each element of the array.
 * @param end The upper bound of the random integer for each element of the array.
 * @param seed The random seed.
 */
void RandomArray(int array[], const size_t size, const int start = 0, const int end = MAX_RAND, unsigned int seed = time(NULL));

/**
 * @brief Generate a random array whose elements are in range of [start, end].
 *
 * @param size The generated random array.
 * @param start The lower bound of the random integer for each element of the array.
 * @param end The upper bound of the random integer for each element of the array.
 * @param seed The random seed.
 *
 * @return Pointer of the generated random array.
 */
int* RandomArray(const size_t size, const int start = 0, const int end = MAX_RAND, unsigned int seed = time(NULL));

}  // namespace common
}  // namespace algo

#endif  // UTIL_RANDOM_H_
