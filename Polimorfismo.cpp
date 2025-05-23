#include <iostream>
#include <vector>
using namespace std;

class Operacion {
public:
    virtual double calcular(double a, double b) = 0;
    virtual ~Operacion() {}
};

class Suma : public Operacion {
public:
    double calcular(double a, double b) override {
        return a + b;
    }
};

class Resta : public Operacion {
public:
    double calcular(double a, double b) override {
        return a - b;
    }
};

class Multiplicacion : public Operacion {
public:
    double calcular(double a, double b) override {
        return a * b;
    }
};

class Division : public Operacion {
public:
    double calcular(double a, double b) override {
        if (b == 0) throw invalid_argument("División por cero");
        return a / b;
    }
};
