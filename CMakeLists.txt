
cmake_minimum_required(VERSION 3.25)

project(Natrium LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(IMGUI_DIR "${CMAKE_SOURCE_DIR}/External/imgui")

find_package(OpenGL REQUIRED)

add_subdirectory(External/glfw)

add_executable(Natrium
    Source/main.cpp
    Source/Bionic/Creature/microbe.cpp
    Source/Math/Vector_2/vector_2.cpp
    Source/WIndow_Manager/window_mngr.cpp

    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/imgui_demo.cpp

    ${IMGUI_DIR}/backends/imgui_impl_glfw.cpp
    ${IMGUI_DIR}/backends/imgui_impl_opengl3.cpp
)

target_link_options(Natrium PRIVATE "LINKER:/ENTRY:mainCRTStartup")

target_include_directories(Natrium PRIVATE
    External
    Include
)

target_link_libraries(Natrium PRIVATE
    glfw
)

set_target_properties(Natrium PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/$<CONFIG>"
)
