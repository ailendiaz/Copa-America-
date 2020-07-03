#ifndef GOLES_H
#define GOLES_H


class Goles
{
    public:
        Goles();
        bool leerGoles(int);
        char* getCodigoJugador();
        short int getTipoDeGol();

    private:
        char codigoPartido [5];
        int minutos;
        short int tiempo;
        char codigoJugador [5];
        short int tipoDeGol;
};

#endif // GOLES_H
