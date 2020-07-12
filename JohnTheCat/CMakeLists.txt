cmake_minimum_required(VERSION 3.17.3)

project(JohnTheCat)

add_library(JohnTheCat STATIC 
    ${CMAKE_CURRENT_LIST_DIR}/JohnTheCat.cpp
    ${CMAKE_CURRENT_LIST_DIR}/JohnTheCat.h
)

add_library(JohnHouse STATIC 
    ${CMAKE_CURRENT_LIST_DIR}/JohnHouse.cpp
    ${CMAKE_CURRENT_LIST_DIR}/JohnHouse.h
)

# add_library(CatInterface STATIC 
#     ${CMAKE_CURRENT_LIST_DIR}/CatInterface.h
# )

set(PROJECT_JOHNTHECAT ${PROJECT_NAME} PARENT_SCOPE)