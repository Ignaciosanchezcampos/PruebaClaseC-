/*
 * test_PruebaClaseC++.cpp
 *
 *  Created on: 28 sept 2025
 *      Author: LENOVO
 */

#include <gtest/gtest.h>
#include <cstdio>

// Declaración de las funciones que están en suma.cpp
int Suma();
int Suma(int a);
float Suma(float a, float b);

// Test para Suma()
TEST(SumaTest, SinParametros) {
    EXPECT_EQ(Suma(), 3);  // 1 + 2 = 3
}

// Test para Suma(int)
TEST(SumaTest, ConEntero) {
    EXPECT_EQ(Suma(4), 7);   // 5 + 2 = 7
    EXPECT_EQ(Suma(-1), 0);  // -2 + 2 = 0
}

// Test para Suma(float, float)
TEST(SumaTest, ConFloats) {
    EXPECT_FLOAT_EQ(Suma(2.5f, 3.5f), 6.0f);
    EXPECT_FLOAT_EQ(Suma(-1.2f, 0.2f), -1.0f);
}

// main para correr los tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


