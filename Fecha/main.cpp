#include <iostream>
#include "fecha.h"

using namespace std;

int main(){

    //fecha miNacimiento(19, 3, 1978);

    //fecha cumpleEnrique(miNacimiento);

    //miNacimiento.ImprimirDia();

    //cumpleEnrique.ImprimirDia();

    /*
    fecha fecha_1(31,1,2024);
    fecha_1.IncrementarDia();
    fecha_1.ImprimirDia();

    fecha fecha_2(29,2,2024);
    fecha_2.IncrementarDia();
    fecha_2.ImprimirDia();

    fecha fecha_3(28,2,2023);
    fecha_3.IncrementarDia();
    fecha_3.ImprimirDia();

    fecha fecha_4(31,12,2023);
    fecha_4.IncrementarDia();
    fecha_4.ImprimirDia();
    */

    fecha fecha_5(1,1,2023);

    for (int i= 0; i < 500 ; i++){
        fecha_5.IncrementarDia();
        //fecha_5.ImprimirDia();
        cout << fecha_5;
    }

    return 0;
}
