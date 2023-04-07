#include <iostream>
#include "punto3d.h"

using namespace std;

int main(){

    punto3D A(2, -3, 4);
    cout << "A= " << A << endl;
    punto3D B(1, 7.5, 5);
    cout << "B= " << B << endl;

    punto3D C;
    C = A+B;
    cout << "C= " << C << endl;

    punto3D D;
    D= -C;
    cout << "D= " << D << endl;

    return 0;
}
