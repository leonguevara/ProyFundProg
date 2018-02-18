cmake_minimum_required(VERSION 3.8)
project(ProbPaco)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Persona.cpp Persona.h Alumno.cpp Alumno.h FormatoHora.cpp FormatoHora.h Horario.cpp Horario.h Profesor.cpp Profesor.h Materia.cpp Materia.h)
add_executable(ProbPaco ${SOURCE_FILES})