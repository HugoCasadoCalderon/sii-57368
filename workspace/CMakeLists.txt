CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
PROJECT (TENIS)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)

SET(COMMON_SRCS
    src/Mundo.cpp
    src/Esfera.cpp
    src/Plano.cpp
    src/Raqueta.cpp
    src/Vector2D.cpp
)

ADD_EXECUTABLE(tenis src/tenis.cpp ${COMMON_SRCS})
add_executable(logger src/logger.cpp)

TARGET_LINK_LIBRARIES(tenis glut GL GLU)
