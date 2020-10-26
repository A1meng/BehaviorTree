project(runtime)

message(STATUS "Configure runtime")

#--------------------------------------------------
# files collection
# collect interface
file(GLOB INTERFACE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/interfaces/*.h)

# collect tree lib
file(GLOB TREE_LIB_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/tree/*.h)
file(GLOB TREE_LIB_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/tree/*.cpp)

# assemble all source
set(RUNTIME_SOURCES ${TREE_LIB_SOURCES})

# ------------------------------------------------------------

add_executable(${PROJECT_NAME} main.cpp ${INTERFACE_FILES} ${TREE_LIB_HEADERS} ${RUNTIME_SOURCES})

add_dependencies(${PROJECT_NAME} common)

#-----------------------------------------------
# source  group
source_group("Interfaces" FILES ${INTERFACE_FILES})

source_group("Tree/Header" FILES ${TREE_LIB_HEADERS})
source_group("Tree/Source" FILES ${TREE_LIB_SOURCES})

include_directories(
    "${CMAKE_CURRENT_SOURCE_DIR}/"
    "${CMAKE_CURRENT_SOURCE_DIR}/../common"
)