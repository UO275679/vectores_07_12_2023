#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
    Vector(const double *, int );
    Vector(const Vector &vector);

    void shiftVector(void);
    double productoEscalar(Vector mul2);

    void setValueInitial(double valueInitial=0 );
    void setPosValue(int position,double value);
    double getPosValue(int position);
    void printVector();

    ~Vector();
private:
    double *vector_;
    int dim_;
};

#endif // VECTOR_H
