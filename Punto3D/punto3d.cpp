#include "punto3d.h"

using namespace std;

punto3D::punto3D() {
    this->mX = 0;
    this->mY = 0;
    this->mZ = 0;
}

punto3D::punto3D(float x, float y, float z) {
    this->mX = x;
    this->mY = y;
    this->mZ = z;
}

// Metodos (Getters y Setters).
void punto3D::SetX (float x) {
    this->mX = x;
}

void punto3D::SetY (float y) {
    this->mY = y;
}

void punto3D::SetZ (float z) {
    this->mZ = z;
}

void punto3D::SetPunto (float x, float y, float z) {
    this->mX = x;
    this->mY = y;
    this->mZ = z;
}

void punto3D::SetPunto (const punto3D& origen) {
    this->mX = origen.mX;
    this->mY = origen.mY;
    this->mZ = origen.mZ;
}

float punto3D::GetX (void) {
    return (this->mX);
}

float punto3D::GetY (void) {
    return (this->mY);
}

float punto3D::GetZ (void) {
    return (this->mZ);
}

punto3D punto3D::GetPunto (void) {
    return (*this);
}

punto3D::~punto3D() {

}

punto3D punto3D::operator+(const punto3D& origen) {
    punto3D auxiliar;
    auxiliar.mX = this->mX + origen.mX;
    auxiliar.mY = this->mY + origen.mY;
    auxiliar.mZ = this->mZ + origen.mZ;
    return auxiliar;
}

punto3D punto3D::operator-(const punto3D& origen) {
    punto3D auxiliar;
    auxiliar.mX = this->mX - origen.mX;
    auxiliar.mY = this->mY - origen.mY;
    auxiliar.mZ = this->mZ - origen.mZ;
    return auxiliar;
}

punto3D punto3D::operator-(void) {
    this->mX = -(this->mX);
    this->mY = -(this->mY);
    this->mZ = -(this->mZ);
    return *this;
}

void punto3D::ImprimirPunto (void) {
    cout << "[" << this->mX << ";" << this->mY << ";" << this->mZ << "]" << endl;
}

ostream & operator<< (ostream& o, const punto3D& p) {
    cout << "[" << p.mX << ";" << p.mY << ";" << p.mZ << "]" << endl;
    return o;
}
