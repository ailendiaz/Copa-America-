#include "JugadoresPuntoB.h"
#include "iostream"

JugadoresPuntoB::JugadoresPuntoB()
{
    cantidadGoles=0;
}

void JugadoresPuntoB::aumentarGoles()
{
    cantidadGoles++;
}

void JugadoresPuntoB::mostrar()
{
    std::cout<<"Codigo de jugador: "<< this->getCodigoJugador()<<std::endl;
    std::cout<<"Nombre del jugador: "<< this->getNombreJugador()<<std::endl;
    std::cout<<"Pais: "<< this->getCodigoPais()<<std::endl;
    std::cout<<"Edad: "<< this->getEdad()<< std::endl;
    std::cout<<"Cantidad goles: "<< this->getCantidadGoles()<<std::endl;
}

int JugadoresPuntoB::getCantidadGoles()
{
    return cantidadGoles;
}
