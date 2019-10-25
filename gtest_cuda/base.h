//
// Created by xiaolu.lin on 2019/10/25.
//

#ifndef GTEST_CUDA_SRC_BASE_H_
#define GTEST_CUDA_SRC_BASE_H_

void checkCudaResultMsg(cudaError_t cuda_err, const char * message, const char * file, int line){
    if(cudaSuccess != cuda_err)
    {
        printf("%s:%d  %s, ErrorStr[ %s ], ErrorCode[ %d ].\n", file, line, message, cudaGetErrorString(cuda_err), cuda_err);
        exit(1);
    }
}

void checkCudaResult(cudaError_t cuda_err, const char * file,  int line){
    if(cudaSuccess != cuda_err)
    {
        printf("%s: %d ErrorStr[ %s ], ErrorCode[ %d ].\n", file, line, cudaGetErrorString(cuda_err), cuda_err);
        exit(1);
    }
}

#endif //GTEST_CUDA_SRC_BASE_H_
