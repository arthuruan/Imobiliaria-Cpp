#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <iostream>
#include <sstream>

using namespace std;

class Imovel{
    protected:
        int estado; //casa, apartamento, terreno
        int tipoOferta; //Venda, aluguel
        double valor;
        Endereco endereco;
    public:
        virtual double getValor() = 0;
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
};

#endif // IMOVEL_H