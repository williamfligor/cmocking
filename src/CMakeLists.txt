project(app)

add_library(rx device.c rx.c)
target_include_directories(rx PUBLIC ${PROJECT_SOURCE_DIR})

add_executable(main main.c)
target_link_libraries(main rx)

include_directories(${CPPUTEST_SRC_DIR})
include_directories(${CPPUTESTEXT_SRC_DIR})
include_directories(${PROJECT_SOURCE_DIR}/src)

add_executable(rx_test rx_test.cpp device_mock.cpp)
target_link_libraries(rx_test CppUTest CppUTestExt rx)

add_test(rx_test rx_test)
