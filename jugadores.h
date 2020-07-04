#ifndef JUGADORES_H
#define JUGADORES_H


class Jugadores
{
    public:
        Jugadores();
        bool leerJugador(int);
        char* getCodigoJugador();
        char* getNombreJugador ();
        short int getCodigoPais();
        short int getEdad();
        void setCodigoJugador(char*);
        void setNombreJugador (char*);
        void setCodigoPais(short int);
        void setEdad(short int);

    protected:
        char codigoJugador [5];
        char nombreJugador [30];
        short int codigoPais;
        short int edad;
};

#endif // JUGADORES_H
