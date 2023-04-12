cmake_minimum_required(VERSION 2.8)
project(hello_poco)

find_package(Poco REQUIRED Foundation Net Util)

add_executable(${PROJECT_NAME}
		src/hello.cpp
)

target_link_libraries(${PROJECT_NAME} 
		Poco::Foundation
		Poco::Net
		Poco::Util
)

#message (STATUS "${OpenCV_INCLUDE_DIRS}")		