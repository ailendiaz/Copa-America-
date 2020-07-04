#include "paises.h"
#include "cstdlib"
#include "iostream"

Paises::Paises()
{
    //ctor
}

bool Paises::leerPaises()
{
    FILE *p;
    p=fopen("Paises.dat","rb");
    if (p==NULL)
    {
        std::cout<<"El archivo de Paises no pudo ser leido"<<std::endl;
        return false;
    }
    fseek(p,sizeof *this,0);
    bool leyo= fread(this, sizeof *this,1,p);
    fclose(p);

    return leyo;

}
