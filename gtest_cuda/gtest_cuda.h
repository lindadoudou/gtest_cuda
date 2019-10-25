//
// Created by xiaolu.lin on 2019/10/25.
//

#ifndef GTEST_CUDA_SRC_GTEST_CUDA_H_
#define GTEST_CUDA_SRC_GTEST_CUDA_H_

#include <gtest/gtest.h>
#include "launch.h"

#define CUDA_SINGLE_TEST(function) \
TEST(function, cuda_single_test){ \
    ASSERT_NO_FATAL_FAILURE(launch(function, 1, 1, __FILE__, __LINE__)); \
}

#define CUDA_SIMPLE_TEST(function) \
TEST(function, cuda_simple_test){ \
    ASSERT_NO_FATAL_FAILURE(launch(function, 32, 1, __FILE__, __LINE__)); \
}

#define CUDA_TEST(function, blocks, threads) \
TEST(function, cuda_test_##blocks_##threads){ \
    ASSERT_NO_FATAL_FAILURE(launch(function, blocks, threads, __FILE__, __LINE__)); \
}

#define CUDA_DEATH_TEST(function, blocks, threads) \
TEST(function, cuda_death_test_##blocks_##threads){ \
    ASSERT_DEATH(launch(function, blocks, threads, __FILE__, __LINE__), ""); \
}



#endif //GTEST_CUDA_SRC_GTEST_CUDA_H_
