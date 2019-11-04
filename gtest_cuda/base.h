//
// Created by xiaolu.lin on 2019/10/25.
//

#ifndef GTEST_CUDA_SRC_BASE_H_
#define GTEST_CUDA_SRC_BASE_H_

void checkCudaResultMsg(cudaError_t cuda_err, const char * file, int line,  const char * message);

void checkCudaResult(cudaError_t cuda_err, const char * file,  int line);

#endif //GTEST_CUDA_SRC_BASE_H_
