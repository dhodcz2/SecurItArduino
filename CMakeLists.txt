cmake_minimum_required(VERSION 3.17)
project(SecurItArduino)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SecurItArduino
        PIR_Trigger.ino
        Snapshot.ino)
