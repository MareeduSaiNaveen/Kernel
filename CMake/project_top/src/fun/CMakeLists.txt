add_library(mylib sum.c sub.c mul.c div.c)

target_include_directories(mylib
  PUBLIC ${PROJECT_SOURCE_DIR}/inc
)
