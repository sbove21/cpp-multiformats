add_library(multiaddr src/multiaddr.cpp)
target_include_directories(multiaddr PUBLIC include)
target_link_libraries(multiaddr PRIVATE varint)