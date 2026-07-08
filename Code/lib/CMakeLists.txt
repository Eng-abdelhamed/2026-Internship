add_library(math
    math.cpp
)

target_include_directories(math
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
