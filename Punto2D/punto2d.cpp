#include "punto2d.h"

using namespace std;

punto2D::punto2D() {
    this->mX = 0;
    this->mY = 0;
}

punto2D::punto2D(float x, float y) {
    this->mX = x;
    this->mY = y;
}

// Metodos (Getters y Setters).
void punto2D::SetX (float x) {
    this->mX = x;
}

void punto2D::SetY (float y) {
    this->mY = y;
}

void punto2D::SetPunto (float x, float y) {
    this->mX = x;
    this->mY = y;
}

void punto2D::SetPunto (const punto2D& origen) {
    this->mX = origen.mX;
    this->mY = origen.mY;
}

float punto2D::GetX (void) {
    return (this->mX);
}

float punto2D::GetY (void) {
    return (this->mY);
}

punto2D punto2D::GetPunto (void) {
    return (*this);
}

punto2D::~punto2D() {

}

punto2D punto2D::operator+(const punto2D& origen) {
    punto2D auxiliar;
    auxiliar.mX = this->mX + origen.mX;
    auxiliar.mY = this->mY + origen.mY;
    return auxiliar;
}

punto2D punto2D::operator-(const punto2D& origen) {
    punto2D auxiliar;
    auxiliar.mX = this->mX - origen.mX;
    auxiliar.mY = this->mY - origen.mY;
    return auxiliar;
}

punto2D punto2D::operator-(void) {
    this->mX = -(this->mX);
    this->mY = -(this->mY);
    return *this;
}

void punto2D::ImprimirPunto (void) {
    cout << "[" << this->mX << ";" << this->mY << "]" << endl;
}

ostream & operator<< (ostream& o, const punto2D& p) {
    cout << "[" << p.mX << ";" << p.mY << "]" << endl;
    return o;
}
