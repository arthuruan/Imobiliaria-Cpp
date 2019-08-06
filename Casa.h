#ifndef CASA_H
#define CASA_H
#include "Imovel.h"
#include <iostream>

class Casa : public Imovel{
    private:
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstrida;
    public:
        Casa();
        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
};

#endif // CASA_H