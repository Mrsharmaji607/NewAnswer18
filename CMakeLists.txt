cmake_minimum_required(VERSION 3.12)
project(MediaIndexer)

set(CMAKE_CXX_STANDARD 11)

# Source files
set(SRCS
    Main.cpp
    MediaScanner.cpp
    MediaExtractor.cpp
    MediaDatabase.cpp
    Song.cpp
)

# Create executable
add_executable(media_app ${SRCS})
