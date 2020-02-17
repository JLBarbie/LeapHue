file(GLOB hueplusplus_HEADERS include/*.h include/*.hpp)
set(hueplusplus_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/ExtendedColorHueStrategy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ExtendedColorTemperatureStrategy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Hue.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/HueCommandAPI.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/HueLight.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/jsoncpp.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SimpleBrightnessStrategy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SimpleColorHueStrategy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SimpleColorTemperatureStrategy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/UPnP.cpp
)

# on windows we want to compile the WinHttpHandler
if(WIN32)
    set(hueplusplus_SOURCES
        ${hueplusplus_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/WinHttpHandler.cpp
    )
endif()
# whereas on linux we want the LinHttpHandler
if(UNIX)
    set(hueplusplus_SOURCES
        ${hueplusplus_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/LinHttpHandler.cpp
    )
endif()


# Set global includes BEFORE adding any targets for legacy CMake versions
if(CMAKE_VERSION VERSION_LESS 2.8.12)
	include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
endif()

# hueplusplus static library
add_library(hueplusplusstatic STATIC ${hueplusplus_SOURCES})
set_property(TARGET hueplusplusstatic PROPERTY CXX_STANDARD 14)
set_property(TARGET hueplusplusstatic PROPERTY CXX_EXTENSIONS OFF)
if (NOT CMAKE_VERSION VERSION_LESS 2.8.12)
    target_include_directories(hueplusplusstatic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
endif()
