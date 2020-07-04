#ifndef RESOLVER_H
#define RESOLVER_H
#include "jugadores.h"
#include "paises.h"
#include "Goles.h"
#include "jugadorespuntoa.h"
#include "JugadoresPuntoB.h"

class Resolver
{
    public:
        Resolver();
        void ResolverA();
        void ResolverB();
        void ResolverC();
        int cantidadRegistrosArchivo(char*nombreArchivo,int tam);
        bool copiarJugadores(JugadoresPuntoB*,int);
        int buscarIndiceMayor(JugadoresPuntoB*,int);
        void mostrarPuntoC(int *);
    private:
};

#endif // RESOLVER_H
