#include "Endereco.h"
#include <iostream>

using namespace std;

Endereco::Endereco()
{
    logradouro = "logradouro nao informado";
    numero = 0;
    bairro = "bairro nao informado";
    cep = "cep nao informado";
    cidade = "cidade nao informado";

}

string Endereco::getLogradouro()
{
    return logradouro;
}

int Endereco::getNumero()
{
    return numero;
}

string Endereco::getBairro()
{
    return bairro;
}

string Endereco::getCep()
{
    return cep;
}

string Endereco::getCidade()
{
    return cidade;
}

void Endereco::setLogradouro(string logradouro)
{
    this -> logradouro= logradouro;
}

void Endereco::setNumero(int numero)
{
    if(numero<0)
        this -> numero = 0;
    else
        this -> numero = numero;
}

void Endereco::setBairro(string bairro)
{
    this -> bairro = bairro;
}

void Endereco::setCep(string cep)
{
    this -> cep = cep;
}

void Endereco::setCidade(string cidade)
{
    this -> cidade=cidade;
}
