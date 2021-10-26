add_executable(feed_tests main.cpp library.cpp)

find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(feed_tests PRIVATE feed Catch2::Catch2)