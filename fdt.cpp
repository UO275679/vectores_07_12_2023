#include "fdt.h"
#include <iostream>
using namespace  std;

Fdt::Fdt (Vector &num, Vector &den)   : num_(num),
    den_(den),vectorXk_(num), vectorYk_(den)
{
    vectorXk_.setValueInitial(0.0);
    vectorYk_.setValueInitial(0.0);
    factorInitial = den_.getPosValue(0);
}

Fdt::~Fdt() {
}

void Fdt::printFdt(void) {
    cout<<"Numerador: ";
    num_.printVector();
    cout<<"Denominador: ";
    den_.printVector();
}

double Fdt::obtenerSalidaFdt(double xk_p) {
    double salida;
    vectorYk_.shiftVector();
    vectorXk_.shiftVector();
    vectorXk_.setPosValue(0,xk_p);
    salida= (vectorXk_.productoEscalar(num_)- vectorYk_.productoEscalar(den_)) /factorInitial;
    vectorYk_.setPosValue(0,salida);
    return (salida) ;
}
