#include "fecha.h"
#include <iostream>

using namespace std;

#define ENE 1
#define FEB 2
#define MAR 3
#define ABR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AGO 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DIC 12


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

bool fecha::esBisiesto(const int anio)const{
    if( (anio % 4 == 0) && ( (anio % 100 != 0) || (anio % 400 == 0) ) ){
        return true;
    }
    return false;
}


bool fecha::tiene28Dias(const int mes, const int anio)const{
    if ( (mes == FEB) && !esBisiesto(anio) ){
        return true;
    }
    return false;
}

bool fecha::tiene29Dias(const int mes, const int anio)const{
    if ( (mes == FEB) && esBisiesto(anio) ){
        return true;
    }
    return false;
}

bool fecha::tiene30Dias(const int mes)const{
    if ( mes == ABR || mes == JUN || mes == SEP || mes == NOV ){
        return true;
    }
    return false;
}

bool fecha::tiene31Dias(const int mes)const{
    if ( mes == ENE || mes == MAR || mes == MAY || mes == JUL || mes == AGO || mes == OCT || mes == DIC ){
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
