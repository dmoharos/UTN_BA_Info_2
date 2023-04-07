#ifndef FECHA_H
#define FECHA_H

#include <iostream>

using namespace std;

class fecha {

        int mDia;
        int mMes;
        int mAnio;


    public:

        // Constructores.
        fecha(int dia, int mes, int anio);

        // Metodos.
        void IncrementarDia(void);
        void ImprimirDia(void);

        bool esBisiesto(int);
        bool tiene28Dias(int, int);
        bool tiene29Dias(int, int);
        bool tiene30Dias(int);
        bool tiene31Dias(int);

        friend ostream& operator<<(ostream&, const fecha&);

        // Destructor.
        ~fecha();

};

#endif // FECHA_H
