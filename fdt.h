#ifndef FDT_H
#define FDT_H
#include "vector.h"

class Fdt {
public:
    Fdt (Vector &num, Vector &den);
    ~Fdt();
    double obtenerSalidaFdt(double xk_p);
    void printFdt(void);
private:
    Vector num_;
    Vector den_;
    Vector vectorXk_;
    Vector vectorYk_;
    double factorInitial;
};

#endif // FDT_H
