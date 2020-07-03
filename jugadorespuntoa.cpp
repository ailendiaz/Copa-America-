#include "jugadorespuntoa.h"
#include "cstring"
#include "cstdio"
#include <iostream>

JugadoresPuntoA::JugadoresPuntoA()
{
    this->cantidadGoles=0;
}


void JugadoresPuntoA::setCodigoJugador (const char* codigoJugador)
{
    strcpy(this->codigoJugador,codigoJugador);
}

void JugadoresPuntoA::setNombreJugador (const char* nombreJugador)
{
    strcpy(this->nombreJugador, nombreJugador);
}

void JugadoresPuntoA::setCodigoPais (short int codigoPais)
{
    this->codigoPais=codigoPais;
}

void JugadoresPuntoA::AumentarCantidadGoles ()
{
    this->cantidadGoles ++;
}

int JugadoresPuntoA::getCantidadGoles()
{
    return cantidadGoles;
}

bool JugadoresPuntoA:: guardarEnDisco()
{
    FILE *p;
    p=fopen("JugadoresPuntoA.dat","ab");
    if (p==NULL)
    {
        std::cout<<"El archivo no puedo ser grabado"<<std::endl;
        exit(1);
    }
    bool grabo=fwrite(this, sizeof *this,1,p);
    fclose(p);

    return grabo;
}
