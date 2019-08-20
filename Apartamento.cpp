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

void Apartamento::EditaImovel(int itemEditado , int indice , string novaString , double novoValor)
{
    for(Imovel *i : listaImovel){
        if(i->getId() == indice){
            switch(itemEditado)
                case 1://
                    setTipoOferta()
                case 2://

                case 3://

                case 4://

                case 5://

                case 6://

                case 7://

                case 8://

                case 9://

                case 10://

                case 11://
                
                case 12://


        }else{
            cout << "Imovel nao encontrado.";
        }
    }
}

string Apartamento::toString()
{
    stringstream strong;

    strong<< "Apartamento\n" << "Id: " << id << endl
          << "Tipo Oferta: " << tipoOferta << endl
          << "Valor: " << valor << endl
          << "Descricao: " << descricao << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cep: " << getEndereco().getCep() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Posicao do apartamento: " << posicao << endl
          << "Numero de quartos: " << numQuartos << endl
          << "Valor do Condominio: " << valorCondominio << endl
          << "Vagas garagem: " << vagasGaragem << endl
          << "Area do apartamento: " << area << endl;

    //system("ws");

    return strong.str();
}