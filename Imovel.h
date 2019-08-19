#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"
#include <iostream>
#include <sstream>
#define FLUSH fflush(stdin)
#include <stdio.h>
#include <sstream>

using namespace std;

class Imovel{
    protected:
        int tipoImovel; //casa, apartamento, terreno
        int tipoOferta; //Venda, aluguel
        double valor;
        Endereco endereco;
        string descricao;
        int id;

    public:
        Imovel();

        int getTipoImovel();
        double getValor();
        int getTipoOferta();
        Endereco getEndereco();
        string getDescricao();
        int getId();

        void setTipoImovel(int tipoImovel);
        void setTipoOferta(int tipoOferta);
        void setValor(double valor);
        void setEndereco(string logradouro, int numero, string bairro, string cep, string cidade);
        void setDescricao(string descricao);
        void setId(int id);

        virtual void EditaImovel();
        virutal void print();
        virtual string toString();
};

#endif // IMOVEL_H
