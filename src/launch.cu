//
// Created by xiaolu.lin on 2019/11/4.
//

#include "launch.h"

void launch(void (*func)(), int blocks, int threads, const char * file, const int line)
{
    (*func)<<<blocks, threads>>>();
    cudaError_t re = cudaDeviceSynchronize();
    checkCudaResult(re, file, line);
}