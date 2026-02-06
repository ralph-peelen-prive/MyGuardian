cmake_minimum_required(VERSION 3.22)
project(myguardian)

add_library(myguardian SHARED
    SafetyStateManager.cpp
)

target_include_directories(myguardian PRIVATE .)
