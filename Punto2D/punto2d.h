#ifndef PUNTO2D_H
#define PUNTO2D_H

#include <iostream>

using namespace std;

class punto2D {


    private:

        float mX;
        float mY;

    public:

        // Constructores.
        punto2D();
        punto2D(float, float);

        // Metodos (Getters y Setters).
        void SetX (float);
        void SetY (float);
        void SetPunto (float, float);
        void SetPunto (const punto2D&);

        float GetX (void);
        float GetY (void);
        punto2D GetPunto (void);

        void ImprimirPunto (void);

        punto2D operator+ (const punto2D&);
        punto2D operator-(const punto2D&);
        punto2D operator-(void);

        friend ostream& operator<< (ostream& o, const punto2D&);

        ~punto2D();
};

#endif // PUNTO2D_H
