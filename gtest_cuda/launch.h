//
// Created by xiaolu.lin on 2019/10/25.
//

#ifndef GTEST_CUDA_SRC_LAUNCH_H_
#define GTEST_CUDA_SRC_LAUNCH_H_

#include <cuda_runtime.h>
#include "base.h"

void launch(void (*func)(), int blocks, int threads, const char * file, const int line);

#endif //GTEST_CUDA_SRC_LAUNCH_H_
