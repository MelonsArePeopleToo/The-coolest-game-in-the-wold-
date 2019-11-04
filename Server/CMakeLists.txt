cmake_minimum_required(VERSION 3.15)
project(Server)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.65.1 COMPONENTS system thread filesystem system REQUIRED)


set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(Server main.cpp Network.cpp Network.h ServI.cpp ServI.h Characters.cpp Characters.h Sessions.cpp Sessions.h)
    target_link_libraries(Server ${Boost_LIBRARIES})
endif()

