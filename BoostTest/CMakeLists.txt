cmake_minimum_required(VERSION 3.5)

project(BoostTest)

set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.80.0 COMPONENTS system filesystem chrono)

set(HEADERS)
source_group(include FILES ${HEADERS})
include_directories(${HEADERS})

set(SOURCES
    src/main.cpp)
source_group(src FILES ${SOURCES})

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(${PROJECT_NAME}
        ${SOURCES} ${HEADERS})
    target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${PROJECT_SOURCE_DIR}/include
        C:/Program\ Files/boost/boost_1_80_0
    )
    target_link_libraries(BoostTest ${Boost_LIBRARIES})
endif()
