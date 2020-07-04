#include "Resolver.h"
#include "cstring"
#include "cstdio"
#include "iostream"
#include "string"

Resolver::Resolver()
{
    //ctor
}

int Resolver::buscarIndiceMayor(JugadoresPuntoB* vec,int tam)
{
    int mayor=vec[0].getCantidadGoles();
    for(int i=1;i<tam;i++)
    {
        if(vec[i].getCantidadGoles()>mayor)
            mayor=vec[i].getCantidadGoles();
    }
return mayor;
}

int Resolver::cantidadRegistrosArchivo(char*nombreArchivo,int tam)
{
    FILE*p;
    p=fopen(nombreArchivo,"rb");
    if(p==NULL)
    {
        std::cout<<"Error al abrir el archivo "<< nombreArchivo << std::endl;
        exit(1);
    }
    fseek(p,0,SEEK_END);
    int tamanio = ftell(p)/tam;
    fclose(p);
return tamanio;
}

bool Resolver::copiarJugadores(JugadoresPuntoB* vec,int tam)
{
    Jugadores jug;

    for(int i=0;i<tam;i++)
    {
        if(jug.leerJugador(i)==false) return false;
        vec[i].setCodigoJugador(jug.getCodigoJugador());
        vec[i].setNombreJugador(jug.getNombreJugador());
        vec[i].setCodigoPais(jug.getCodigoPais());
        vec[i].setEdad(jug.getEdad());
    }
return true;
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
    Jugadores jugador;
    Goles gol;
    int cantReg = this->cantidadRegistrosArchivo("Jugadores.dat",sizeof(Jugadores));
    if(cantReg<=0)
    {
        std::cout<<"No hay registros en el archivo de Jugadores"<<std::endl;
        return;
    }
    JugadoresPuntoB* jugdres = new JugadoresPuntoB[cantReg];
    if(jugdres==NULL)
    {
        std::cout<<"No se pudo asignar memoria"<<std::endl;
        return;
    }
    if(this->copiarJugadores(jugdres,cantReg)==false) return;

    int posGoles=0;
    while(gol.leerGoles(posGoles++))
    {
        if(gol.getTipoDeGol()==2) continue;
        int i;
        for(i=0;i<cantReg;i++)
        {
            if(strcmp(gol.getCodigoJugador(),jugdres[i].getCodigoJugador())==0)break;
        }
        jugdres[i].aumentarGoles();
    }
    int indice=this->buscarIndiceMayor(jugdres,cantReg);
    jugdres[indice].mostrar();

    delete jugdres;
}

void Resolver::ResolverC()
{
    Jugadores jugador;
    Goles gol;

    int vec [12][3]={0};

    for (int i=0; i<12;i++)
    {
        int posJugador=0;
        while (jugador.leerJugador(posJugador++))
        {
            if (jugador.getCodigoPais()==i+1)
            {
                int posGoles=0;
                while (gol.leerGoles(posGoles++))
                {
                    if(strcmp(jugador.getCodigoJugador(),gol.getCodigoJugador())==0)
                    {
                        vec[i][gol.getTipoDeGol()-1]++;
                    }
                }
            }
        }
    }
this->mostrarPuntoC(vec);
}

 void Resolver:: mostrarPuntoC(int vec [12][3])
 {

     for (int i=0; i<12; i++)
     {
         std::cout<<"El pais: "<<i+1;

         for (x=0; x<3;x++)
         {
             std::cout<<"El tipo de gol:"<<x+1<<"su cantidad es:"<<vec[i][x]<<std::endl;

         }
     }

 }
