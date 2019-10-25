//
// Created by xiaolu.lin on 2019/10/25.
//

#include <cuda_runtime.h>
#include <gtest/gtest.h>
#include "gtest_cuda.h"

__global__ void test(){
    int threadId = (blockIdx.x * blockDim.x) + threadIdx.x;
    printf("%d : __%d__\n", threadId, __LINE__);
}

CUDA_SINGLE_TEST(test);

CUDA_SIMPLE_TEST(test);

CUDA_TEST(test, 32, 2);

__global__ void death_test(){
   assert(0);
}
CUDA_DEATH_TEST(death_test, 1, 1);

__global__ void part_death_test(){
    int threadId = (blockIdx.x * blockDim.x) + threadIdx.x;
    assert(threadId > 16);
}
CUDA_DEATH_TEST(part_death_test, 32, 1);