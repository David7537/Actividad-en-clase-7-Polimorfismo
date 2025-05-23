#include <iostream>
#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

int main() {
    Operacion* op;

    op = new Suma();
    std::cout << "sum(1, 5) = " << op->operar(1, 5) << '\n';
    delete op;

    op = new Resta();
    std::cout << "sub(5, 1) = " << op->operar(5, 1) << '\n';
    delete op;

    op = new Multiplicacion();
    std::cout << "mul(3, 4) = " << op->operar(3, 4) << '\n';
    delete op;

    op = new Division();
    std::cout << "div(9, 3) = " << op->operar(9, 3) << '\n';
    delete op;

    return 0;
}
