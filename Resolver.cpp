#include "Resolver.h"

Resolver::Resolver()
{
    //ctor
}

void Resolver::ResolverA()
{

Jugadores jugador;
Goles gol;
JugadoresPuntoA jugadorA;

int posJugador=0;

while (jugador.leerJugador(posJugador++))
{
    int posGoles=0;

    while (gol.leerGoles(posGoles++))
    {

        if (strcmp(jugador.getCodigoJugador(),gol.getCodigoJugador())==0 && gol.getTipoDeGol()!=2)
        {
            jugadorA.AumentarCantidadGoles();
        }

    }
    if (jugadorA.getCantidadGoles())
    {
        jugadorA.setCodigoJugador(jugador.getCodigoJugador());
        jugadorA.setNombreJugador(jugador.getNombreJugador());
        jugadorA.setCodigoPais(jugador.getCodigoPais());
        jugadorA.guardarEnDisco();

    }
}


}


void Resolver::ResolverB()
{

}

void Resolver::ResolverC()
{

}
