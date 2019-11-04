include_directories(${PROJECT_SOURCE_DIR}/gtest_cuda)

set(SOURCE
        base.cu
        launch.cu)

add_library(gtest_cuda ${SOURCE})
set_target_properties(gtest_cuda PROPERTIES CUDA_STANDARD 11)
set_target_properties(gtest_cuda PROPERTIES POSITION_INDEPENDENT_CODE ON)
set_target_properties(gtest_cuda PROPERTIES CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(gtest_cuda cudart)
