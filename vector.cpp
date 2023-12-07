#include "vector.h"
#include <iostream>

using namespace  std;

Vector::Vector(const double *vector, int tam){
    dim_ = tam;
    vector_ = new double[dim_];
    for (int i= 0 ; i < tam; i++)
        vector_[i] = vector[i];
}

Vector::Vector(const Vector &vector){
    vector_ = new double [vector.dim_];
    dim_ = vector.dim_;
    for (int i= 0 ; i < dim_; i++)
        vector_[i] = vector.vector_[i];
}


void Vector::setValueInitial( double valueInitial ){
    for (int i= 0 ; i < dim_; i++)
        vector_[i] = valueInitial;
}


void Vector::printVector() {
    for (int i=0; i < dim_; i++)
        cout<<"  v["<<i<<"]= "<<vector_[i];
    cout<<endl;
}

void Vector::shiftVector(void ){
    for (int i= dim_ -1; i > 0; i--){
        vector_[i]=vector_[i-1];
    }
    vector_[0]=0;
}

void Vector::setPosValue(int position, double value){
    vector_[position]=value;
}

double Vector::getPosValue(int position){
    return (vector_[position]);
}


double Vector::productoEscalar(Vector mul2){
    double producto =0;
    for (int i=0; i < dim_; i++){
        producto = producto + vector_[i]* mul2.vector_[i];
    }
    return producto;
}


Vector::~Vector() {
    delete vector_;
}
