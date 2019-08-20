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
    /*for(Imovel *i : listaImovel){
        if(i->getId() == indice){
            switch(itemEditado)
                case 1://TIPO OFERTA
                    i->setTipoOferta(novoValor);

                case 2://VALOR R$
                    i->setValor(novoValor);

                case 3://DESCRICAO DO IMOVEL
                    i->setDescricao(novaString);

                case 4://LOGRADOURO
                    i->getEndereco().setLogradouro(novaString);

                case 5://NUMERO
                    i->getEndereco().setNumero(novoValor);

                case 6://BAIRRO
                    i->getEndereco().setBairro(novaString);
                    
                case 7://CEP
                    i->getEndereco().setCep(novaString);

                case 8://CIDADE
                    i->getEndereco().setCidade(novaString);

                case 9://POSICAO
                    i->setPosicao(novaString);

                case 10://NUMERO DE QUARTOS
                    i->setNumQuartos(novoValor);

                case 11://VALOR CONDOMINIO
                    i->setValorCondominio(novoValor);

                case 12://VAGAS GARAGEM
                    i->setVagasGaragem(novoValor);

                case 13://AREA DO AP
                    i->setArea(novoValor);

        }else{
            cout << "Imovel nao encontrado.";
        }
    }*/
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