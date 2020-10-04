cmake_minimum_required(VERSION 3.0)

project (libccsds VERSION 1.0)

file(GLOB_RECURSE CCSDS_CPPS src/*.cpp)

add_library(ccsds SHARED ${CCSDS_CPPS})

file(GLOB_RECURSE CCSDS_HS src/*.h)

include(GNUInstallDirs)
install(TARGETS ccsds LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${CCSDS_HS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ccsds)