#include <iostream>
#include "punto2d.h"

using namespace std;

int main(){
    punto2D A(2, -3);
    punto2D B(1, 7.5);

    punto2D C;
    C = A+B;
    cout << "C= " << C << endl;

    punto2D D;
    D= -C;
    cout << "D= " << D << endl;

    return 0;
}
