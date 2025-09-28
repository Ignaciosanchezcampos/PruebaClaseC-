/*
 * PruebaClaseC++.cpp
 *
 *  Created on: 28 sept 2025
 *      Author: LENOVO
 *      Se ha definido la función suma. Añadir 3 funciones:
 *      Suma(): suma 1 y 2
 *      Suma(int a): suma a + 2
 *      Suma(float a, float b): suma a y b
 *      Escribir por pantalla que suma se está realizando y añadir
 *      test para validar la funcionalidad
 *
 *
 */

#include <iostream>
#include <cstdlib>

// Suma sin parámetros: retorna 1 + 2
int Suma() {
    std::cout << "Ejecutando Suma(): 1 + 2" << std::endl;
    return 1 + 2;
}

// Suma con un parámetro entero: retorna a + 2
int Suma(int a) {
    std::cout << "Ejecutando Suma(int): " << a << " + 2" << std::endl;
    return a + 2;
}

// Suma con dos parámetros float: retorna a + b
float Suma(float a, float b) {
    std::cout << "Ejecutando Suma(float, float): " << a << " + " << b << std::endl;
    return a + b;
}



