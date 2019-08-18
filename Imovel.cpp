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

void Imovel::setEndereco(Endereco endereco)
{
    this -> endereco = endereco;
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

void Imovel::CadastroAll(){//em teste

    string logradouro, bairro, cep, cidade;
    int numero; 

    cout << "Digite o logradouro: ";
    cin >> logradouro;
    endereco.setLogradouro(logradouro);
    cout << "Digite o numero do imovel: ";
    cin >> numero;
    endereco.setNumero(numero);
    cout << "Digite o bairro: ";
    cin >> bairro;
    endereco.setBairro(bairro);
    cout << "Digite o CEP: ";
    cin >> cep;
    endereco.setCep(cep);
    cout << "Digite a cidade: ";
    cin >> cidade;
    endereco.setCidade(cidade);
    
}

int Imovel::getId()
{
    return id;
}

void Imovel::setId(int id)
{
    this->id=id;
}




