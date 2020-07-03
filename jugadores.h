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

    private:
        char codigoJugador [5];
        char nombreJugador [30];
        short int codigoPais;
        short int edad;
};

#endif // JUGADORES_H
