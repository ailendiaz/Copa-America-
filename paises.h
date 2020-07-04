#ifndef PAISES_H
#define PAISES_H


class Paises
{
    public:
        Paises();
        bool leerPaises();

    private:
        short int codigoPais;
        char nombrePais [30];
        int grupo;
};

#endif // PAISES_H
