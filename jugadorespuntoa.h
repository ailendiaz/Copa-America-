#ifndef JUGADORESPUNTOA_H
#define JUGADORESPUNTOA_H


class JugadoresPuntoA
{
    public:
        JugadoresPuntoA();
        void setCodigoJugador (const char*);
        void setNombreJugador (const char*);
        void setCodigoPais (short int);
        void AumentarCantidadGoles ();
        int getCantidadGoles();
        bool guardarEnDisco();

    private:
        char codigoJugador [5];
        char nombreJugador [30];
        short int codigoPais;
        int cantidadGoles;
};

#endif // JUGADORESPUNTOA_H
