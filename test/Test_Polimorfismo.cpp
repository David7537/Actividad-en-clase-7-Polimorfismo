#include <gtest/gtest.h>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

TEST(PolimorfismoTest, SumaDinamica) {
    Operacion* op = new Suma();
    EXPECT_EQ(op->calcular(5, 2), 7);
    delete op;
}

TEST(PolimorfismoTest, RestaDinamica) {
    Operacion* op = new Resta();
    EXPECT_EQ(op->calcular(9, 4), 5);
    delete op;
}

TEST(PolimorfismoTest, MultiplicacionDinamica) {
    Operacion* op = new Multiplicacion();
    EXPECT_EQ(op->calcular(6, 6), 36);
    delete op;
}

TEST(PolimorfismoTest, DivisionDinamica) {
    Operacion* op = new Division();
    EXPECT_EQ(op->calcular(8, 2), 4);
    delete op;
}
