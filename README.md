# Aprendiendo C++

Lecciones y ejercicios de mi aprendizaje de C++.

- `lecciones/`: una lección por archivo, en orden.
- `ejercicios/`: ejercicios de práctica.

## Compilar

Con CMake (cada `.cpp` genera un ejecutable en el `bin/` de su carpeta):

```sh
cmake -S . -B build && cmake --build build
./lecciones/bin/01_hola_mundo
```

O un archivo suelto:

```sh
clang++ -std=c++17 lecciones/01_hola_mundo.cpp -o hola && ./hola
```
