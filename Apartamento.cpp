#include "Imovel.h"
#include <iostream>
#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento()
{
    posicao = "Posicao nao informada";
    numQuartos = 0;
    valorCondominio= 0;
    vagasGaragem = 0;
    area = 0;
    tipoImovel = 2;
}

string Apartamento::getPosicao()
{
    return posicao;
}

int Apartamento::getNumQuartos()
{
    return numQuartos;
}

double Apartamento::getValorCondominio()
{
    return valorCondominio;
}

int Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}

double Apartamento::getArea()
{
    return area;
}

void Apartamento::setPosicao(std::string posicao)
{
    this->posicao = posicao;
}

void Apartamento::setNumQuartos(int numQuartos)
{
    if(numQuartos <0)
        this -> numQuartos = 0;
    else
        this->numQuartos = numQuartos;
}

void Apartamento::setValorCondominio(double valorCondominio)
{
    if(valorCondominio<0)
        this -> valorCondominio = 0;
    else
        this ->valorCondominio= valorCondominio;
}

void Apartamento::setVagasGaragem(int vagasGaragem)
{
    if(vagasGaragem<0)
        this->vagasGaragem = 0;
    else
        this->vagasGaragem = vagasGaragem;
}

void Apartamento::setArea(double area)
{
    if(area <0)
        this->area = 0;
    else
        this ->area = area;
}
string Apartamento::toString()
{
    stringstream strong;

    strong<<"Id":id
          <<"Tipo Oferta:"<< tipoOferta
          <<"Tipo Imovel:"<< tipoImovel
          <<"Valor:" << valor
          <<"Logradouro:"<<getEndereco().getLogradouro()
          <<"Numero:"<<getEndereco().getNumero()
          <<"Bairro:"<<getEndereco().getBairro()
          <<"Cidade:"<<getEndereco().getCidade()
          <<"Estado:"<<getEndereco().getCep()
          <<"Posicao do apartamento"<<posicao
          <<"Numero de quartos:"<<numQuartos
          <<"Valor do Condominio:"<<valorCondominio
          <<"Vagas garagem:"<<vagasGaragem
          <<"Area do apartamento:"<<area;

    return strong;


}





