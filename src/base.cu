//
// Created by xiaolu.lin on 2019/11/4.
//
#include <stdio.h>
#include "base.h"

void checkCudaResultMsg(cudaError_t cuda_err, const char * file, int line,  const char * message){
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