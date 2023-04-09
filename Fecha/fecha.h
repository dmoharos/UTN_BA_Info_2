#ifndef FECHA_H
#define FECHA_H

#include <iostream>

using namespace std;

class fecha {

    private:

        int mDia;
        int mMes;
        int mAnio;

        bool esBisiesto(const int) const;
        bool tiene28Dias(const int, const int) const;
        bool tiene29Dias(const int, const int) const;
        bool tiene30Dias(const int) const;
        bool tiene31Dias(const int) const;

    public:

        // Constructores.
        fecha(int dia, int mes, int anio);

        // Metodos.
        void IncrementarDia(void);
        void ImprimirDia(void);

        friend ostream& operator<<(ostream&, const fecha&);

        // Destructor.
        ~fecha();

};

#endif // FECHA_H
