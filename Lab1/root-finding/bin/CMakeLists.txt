project(root_finding_bin)

add_executable(root_finding_bin main.cpp)

find_path(ROOT_FINDING_H_DIR root_finding.h)
if (NOT ROOT_FINDING_H_DIR)
  message(
    SEND_ERROR
    "Couldn't find header")
endif()

find_library(ROOT_FINDING_LIB root_finding_lib)
if (NOT ROOT_FINDING_LIB)
  message(
    SEND_ERROR
    "Couldn't find library")
endif()

add_library(root_finding_lib STATIC IMPORTED)
set_property(
  TARGET root_finding_lib
  PROPERTY INTERFACE_INCLUDE_DIRECTORIES
  ${ROOT_FINDING_H_DIR})

set_property(
  TARGET root_finding_lib
  PROPERTY IMPORTED_LOCATION
  ${ROOT_FINDING_LIB}
)

target_link_libraries(root_finding_bin root_finding_lib)
