cmake_minimum_required(VERSION 3.20)
project(aprendiendo_cpp CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Cada .cpp de lecciones/ y ejercicios/ es un ejecutable que se guarda en <carpeta>/bin/
foreach(carpeta lecciones ejercicios)
    file(GLOB fuentes CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/${carpeta}/*.cpp")
    foreach(fuente ${fuentes})
        get_filename_component(nombre ${fuente} NAME_WE)
        add_executable(${carpeta}_${nombre} ${fuente})
        set_target_properties(${carpeta}_${nombre} PROPERTIES
            OUTPUT_NAME ${nombre}
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/${carpeta}/bin")
    endforeach()
endforeach()
