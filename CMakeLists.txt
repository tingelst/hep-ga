CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(hep-ga)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

# Catch Unit Tests
find_package(Catch REQUIRED)

INCLUDE_DIRECTORIES(
  include
  ${CATCH_INCLUDE_DIR}
)

ADD_SUBDIRECTORY(doc)

enable_testing(true)
#I like to keep test files in a separate source directory called test
file(GLOB TEST_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} test/*.cpp)

#Run through each source
foreach(test_src ${TEST_SRCS})
  #Extract the filename without an extension (NAME_WE)
  get_filename_component(test_name ${test_src} NAME_WE)

  #Add compile target
  add_executable(${test_name} ${test_src})

  #Finally add it to test execution - 
  add_test(NAME ${test_name} 
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} 
    COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/build/${test_name} )
endforeach(test_src)

