#include "jugadores.h"
#include "cstdio"
#include <iostream>
#include "cstring"

Jugadores::Jugadores()
{
    //ctor
}

void Jugadores::setCodigoJugador(char* codigo)
{
    strcpy(this->codigoJugador,codigo);
}
void Jugadores::setNombreJugador (char* nombre)
{
    strcpy(this->nombreJugador,nombre);
}
void Jugadores::setCodigoPais(short int cod)
{
    this->codigoPais=cod;
}
void Jugadores::setEdad(short int nuevaEdad)
{
    this->edad=nuevaEdad;
}




short int Jugadores::getEdad()
{
    return edad;
}

bool Jugadores::leerJugador(int pos)
{
    FILE *p;
    p=fopen("Jugadores.dat","rb");
    if (p==NULL)
    {
        std::cout<<"El archivo no pudo ser leido"<<std::endl;
        return false;
    }

    fseek(p, sizeof *this *pos,0);
    bool leyo= fread(this,sizeof *this,1,p);
    fclose(p);

    return leyo;

}

char* Jugadores::getCodigoJugador()
{
    return codigoJugador;
}

char* Jugadores::getNombreJugador ()
{
    return nombreJugador;
}
short int Jugadores::getCodigoPais()
{
    return codigoPais;
}
