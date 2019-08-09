#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <iostream>
#include <sstream>



using namespace std;

class Imovel{
    protected:
        int tipoImovel; //casa, apartamento, terreno
        int tipoOferta; //Venda, aluguel
        double valor;
        Endereco endereco;

    public:
        Imovel();
       
        int getTipoImovel();
        double getValor();
        int getTipoOferta();
        Endereco getEndereco();

        void setTipoImovel(int tipoImovel);
        void setTipoOferta(int tipoOferta);
        void setValor(double valor);
        void setEndereco(Endereco endereco);
 
        virtual void EditaImovel() = 0;
};

#endif // IMOVEL_H
