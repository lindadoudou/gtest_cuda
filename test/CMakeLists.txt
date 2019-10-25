include_directories(${PROJECT_SOURCE_DIR}/gtest_cuda)

set(TEST_SOURCE
        cuda_test.cu
        main.cpp)

add_executable(gtest_cuda_test ${TEST_SOURCE})
set_target_properties(gtest_cuda_test PROPERTIES CUDA_STANDARD 11)
set_target_properties(gtest_cuda_test PROPERTIES POSITION_INDEPENDENT_CODE ON)
set_target_properties(gtest_cuda_test PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(gtest_cuda_test gtest gtest_main)
target_link_libraries(gtest_cuda_test cudart)
