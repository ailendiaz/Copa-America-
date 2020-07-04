#ifndef JUGADORESPUNTOB_H
#define JUGADORESPUNTOB_H
#include "jugadores.h"

class JugadoresPuntoB :public Jugadores
{
    public:
        JugadoresPuntoB();
        void aumentarGoles();
        void mostrar();
        int getCantidadGoles();
    private:
        int cantidadGoles;
};

#endif // JUGADORESPUNTOB_H
