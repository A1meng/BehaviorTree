project(common)

# collect all header files
file(GLOB HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.h)

file(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# source_group()

add_library(${PROJECT_NAME} ${HEADER_FILES} ${SRC_FILES})