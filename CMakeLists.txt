cmake_minimum_required(VERSION 3.9.0)
include_directories(include)
set(CMAKE_OSX_SYSROOT /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX11.3.sdk)
project(ComputerForQt)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_DEBUG_POSTFIX = -G)
set(CMAKE_AUTOUIC ON)
ADD_COMPILE_OPTIONS(-std=c++11)
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Network
        REQUIRED)
include_directories(include)
aux_source_directory(include IN_SRCS)
aux_source_directory(include/DataStruct IN_SRCS)
aux_source_directory(include/Networks IN_SRCS)
aux_source_directory(src DIR_SRCS)
set(SRC ${DIR_SRCS})

add_executable(${PROJECT_NAME}  src/DataStruct/main.cpp src/mainWindow.cpp include/mainWindow.h src/DataStruct/main.cpp
        src/DataStruct/pushButton.cpp include/DataStruct/pushButton.h src/DataStruct/DataTable.cpp
        include/DataStruct/DataTable.h src/DataStruct/ArrayList.cpp include/DataStruct/ArrayList.h
        src/DataStruct/ArrayWindow.cpp include/DataStruct/ArrayWindow.h src/DataStruct/LinkListWindow.cpp
        include/DataStruct/LinkListWindow.h src/Networks/TCPWindow.cpp include/Networks/TCPWindow.h
        src/Networks/HTTP.cpp include/Networks/HTTP.h)
target_link_libraries(${PROJECT_NAME}
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Network
        )

