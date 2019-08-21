#include "Imovel.h"
#include <iostream>


Imovel::Imovel()
{
    tipoImovel = 0;
    tipoOferta = 0;
    valor = 0;
}

int Imovel::getTipoImovel()
{
    return tipoImovel;
}

double Imovel::getValor()
{
    return valor;
}

int Imovel::getTipoOferta()
{
    return tipoOferta;
}

Endereco Imovel::getEndereco()
{
    return endereco;
}

void Imovel::setTipoImovel(int tipoImovel)
{
    this -> tipoImovel=tipoImovel;
}

void Imovel::setTipoOferta(int tipoOferta)
{
    this -> tipoOferta=tipoOferta;
}

void Imovel::setValor(double valor)
{
    if(valor<0)
        this -> valor = 0;
    else
        this -> valor = valor;
}

void Imovel::setEndereco(string logradouro, int numero, string bairro, string cep, string cidade)
{
    endereco.setLogradouro(logradouro);
    endereco.setBairro(bairro);
    endereco.setCidade(cidade);
    endereco.setCep(cep);
    endereco.setNumero(numero);
}

string Imovel::getDescricao()
{
    return descricao;
}

void Imovel::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void Imovel::EditaImovel()
{

}

int Imovel::getId()
{
    return id;
}

void Imovel::setId(int id)
{
    this->id=id;
}

string Imovel::toString(){

}

string Imovel::toStringArquivo() {

}