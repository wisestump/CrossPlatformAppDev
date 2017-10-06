project(root_finding_lib)

add_library(
  root_finding_lib
  root_finding.cpp root_finding.h)

get_property(
  LIB_TYPE
  TARGET root_finding_lib
  PROPERTY TYPE)

if(LIB_TYPE STREQUAL SHARED_LIBRARY)
  install(
    TARGETS root_finding_lib
    COMPONENT user
    RUNTIME
      DESTINATION bin
    LIBRARY
      DESTINATION lib)
endif()

install(
  TARGETS root_finding_lib
  COMPONENT developer
  RUNTIME
    DESTINATION bin
  LIBRARY
    DESTINATION lib
  ARCHIVE
    DESTINATION lib)

install(
  DIRECTORY .
  DESTINATION include
  COMPONENT developer
  FILES_MATCHING PATTERN "*.h")

target_include_directories(root_finding_lib INTERFACE)
