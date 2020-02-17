INCLUDE_DIRECTORIES(../hueplusplus/include)
INCLUDE_DIRECTORIES(../leap/include)

LINK_DIRECTORIES(../leap)

FILE(GLOB SRCS *.cpp)

ADD_EXECUTABLE(leaphue ${SRCS})
set_property(TARGET leaphue PROPERTY CXX_STANDARD 11)
TARGET_LINK_LIBRARIES(leaphue hueplusplusstatic Leap)
