<<<<<<<< HEAD:Projekt/build/cmake_install.cmake
# Install script for directory: /home/student/CLionProjects/repo/mkwa_cz_1400_08/Projekt
========
# Install script for directory: /home/student/CLionProjects/repoPobi/mkwa_cz_1400_08/Mikolajczyk/warsztat1
>>>>>>>> origin/hania:Mikolajczyk/build/cmake_install.cmake

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<<< HEAD:Projekt/build/cmake_install.cmake
  include("/home/student/CLionProjects/repo/mkwa_cz_1400_08/Projekt/build/program/cmake_install.cmake")
  include("/home/student/CLionProjects/repo/mkwa_cz_1400_08/Projekt/build/library/cmake_install.cmake")
========
  include("/home/student/CLionProjects/repoPobi/mkwa_cz_1400_08/Mikolajczyk/build/program/cmake_install.cmake")
  include("/home/student/CLionProjects/repoPobi/mkwa_cz_1400_08/Mikolajczyk/build/library/cmake_install.cmake")
>>>>>>>> origin/hania:Mikolajczyk/build/cmake_install.cmake

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<<< HEAD:Projekt/build/cmake_install.cmake
file(WRITE "/home/student/CLionProjects/repo/mkwa_cz_1400_08/Projekt/build/${CMAKE_INSTALL_MANIFEST}"
========
file(WRITE "/home/student/CLionProjects/repoPobi/mkwa_cz_1400_08/Mikolajczyk/build/${CMAKE_INSTALL_MANIFEST}"
>>>>>>>> origin/hania:Mikolajczyk/build/cmake_install.cmake
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
