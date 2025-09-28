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
    int r = 1 + 2;
    std::cout << "Ejecutando Suma(): 1 + 2 = " << r << std::endl;
    return r;
}

// Suma con un parámetro entero: retorna a + 2
int Suma(int a) {
    int r = a + 2;
    std::cout << "Ejecutando Suma(int): " << a << " + 2 = " << r << std::endl;
    return r;
}

// Suma con dos parámetros float: retorna a + b
float Suma(float a, float b) {
    float r = a + b;
    std::cout << "Ejecutando Suma(float, float): " << a << " + " << b << " = " << r << std::endl;
    return r;
}



