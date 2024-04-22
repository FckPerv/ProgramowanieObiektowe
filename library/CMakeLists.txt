cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
		
		test/master.cpp
		src/model/Student.cpp include/model/Student.h src/model/Subscription.cpp include/model/Subscription.h src/model/Gold.cpp include/model/Gold.h src/model/Silver.cpp include/model/Silver.h src/model/Bronze.cpp include/model/Bronze.h src/repo/StudentRepo.cpp include/repo/StudentRepo.h src/manager/StudentManager.cpp include/manager/StudentManager.h src/model/Order.cpp include/model/Order.h src/repo/OrderRepo.cpp include/repo/OrderRepo.h src/model/Tutor.cpp include/model/Tutor.h src/model/Calendar.cpp include/model/Calendar.h src/repo/TutorRepo.cpp include/repo/TutorRepo.h src/manager/TutorManager.cpp include/manager/TutorManager.h include/typedefs.h src/model/Repository.cpp include/repo/Repository.h src/manager/OrderManager.cpp include/manager/OrderManager.h
		src/model/Student.cpp include/model/Student.h src/model/Subscription.cpp include/model/Subscription.h src/model/Gold.cpp include/model/Gold.h src/model/Silver.cpp include/model/Silver.h src/model/Bronze.cpp include/model/Bronze.h src/repo/StudentRepo.cpp include/repo/StudentRepo.h src/manager/StudentManager.cpp include/manager/StudentManager.h src/model/Order.cpp include/model/Order.h src/repo/OrderRepo.cpp include/repo/OrderRepo.h src/model/Tutor.cpp include/model/Tutor.h src/model/Calendar.cpp include/model/Calendar.h src/repo/TutorRepo.cpp include/repo/TutorRepo.h src/manager/TutorManager.cpp include/manager/TutorManager.h include/typedefs.h src/model/Repository.cpp include/repo/Repository.h
        )

add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)
enable_testing()

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES
	)

 # tu w przyszłości będą dodawane pliki źródłowe testów

add_executable (LibraryTest ${SOURCE_TEST_FILES} test/master.cpp)

#dołącz bibliotekę z testowanymi klasami oraz bibliotekę boost.test do programu testów
target_link_libraries (LibraryTest
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

#dodaj test TestBiblioteki1. Instrukcji cmake add_test może być wiele.
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(LibraryTest1 LibraryTest
        --report_level=detailed
        --log_level=all
        --color_output=yes
        )
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})        
