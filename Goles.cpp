#include "Goles.h"
#include "cstdio"
#include <iostream>

Goles::Goles()
{
    //ctor
}


bool Goles::leerGoles(int pos)
{
    FILE *p;
    p=fopen("Goles.dat","rb");
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
char* Goles::getCodigoJugador()
{
    return codigoJugador;
}

short int Goles::getTipoDeGol()
{
    return tipoDeGol;
}
