#ifndef PUNTO3D_H
#define PUNTO3D_H

#include <iostream>

using namespace std;

class punto3D {

    private:

        float mX;
        float mY;
        float mZ;

    public:

        // Constructores.
        punto3D();
        punto3D(float, float, float);

        // Metodos (Getters y Setters).
        void SetX (float);
        void SetY (float);
        void SetZ (float);
        void SetPunto (float, float, float);
        void SetPunto (const punto3D&);

        float GetX (void);
        float GetY (void);
        float GetZ (void);
        punto3D GetPunto (void);

        void ImprimirPunto (void);

        punto3D operator+ (const punto3D&);
        punto3D operator-(const punto3D&);
        punto3D operator-(void);

        friend ostream& operator<< (ostream& o, const punto3D&);

        ~punto3D();
};

#endif // PUNTO3D_H
