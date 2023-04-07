#include "fecha.h"
#include <iostream>

using namespace std;

fecha::fecha(int dia, int mes, int anio){
    mDia = dia;
    mMes = mes;
    mAnio = anio;
}

void fecha::IncrementarDia(void){

    if ( (this->mDia < 28) && tiene28Dias(this->mMes, this->mAnio) && !esBisiesto(this->mAnio)){
        mDia++;
    }
    else if ( (this->mDia < 29) && tiene29Dias(this->mMes, this->mAnio) && esBisiesto(this->mAnio)){
        mDia++;
    }
    else if ( (this->mDia < 30) && tiene30Dias(this->mMes) ){
        mDia++;
    }
    else if ( (this->mDia < 31) && tiene31Dias(this->mMes)){
        mDia++;
    }
    else{
        mDia= 1;
        if (this->mMes == 12){
            this->mMes = 1;
            this->mAnio++;
        }
        else{
            this->mMes++;
        }
    }

}

bool fecha::tiene28Dias(int mes, int anio){
    if ( (mes == 2) && !esBisiesto(anio) ){
        return true;
    }
    return false;
}

bool fecha::tiene29Dias(int mes, int anio){
    if ( (mes == 2) && esBisiesto(anio) ){
        return true;
    }
    return false;
}

bool fecha::tiene30Dias(int mes){
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        return true;
    }
    return false;
}

bool fecha::tiene31Dias(int mes){
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){
        return true;
    }
    return false;
}

bool fecha::esBisiesto(int anio){
    if( (anio % 4 == 0) && ( (anio % 100 != 0) || (anio % 400 == 0) ) ){
        return true;
    }
    return false;
}

void fecha::ImprimirDia(void){
    cout << this->mDia << "/" << this->mMes << "/" << this->mAnio << endl;
}

ostream& operator<<(ostream& o, const fecha& f){
    cout << f.mDia << "/" << f.mMes << "/" << f.mAnio << endl;
    return o;
}

fecha::~fecha(){

}
