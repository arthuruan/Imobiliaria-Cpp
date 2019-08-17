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
    endereco.setNumero(numero);
    endereco.setBairro(bairro);
    endereco.setCep(cep);
    endereco.setCidade(cidade);
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

void Imovel::CadastroAll(int flag){//em teste
    string log;
    cout << "Digite o logradouro: ";
    cin >> log;
    endereco.setLogradouro(log);
}