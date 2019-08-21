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

    return strong.str();
}

string Apartamento::toStringEdit()
{
    stringstream strong;

    strong<< "Id: " << id << endl
          << "1 - Tipo Oferta: " << tipoOferta << endl
          << "2 - Valor: " << valor << endl
          << "3 - Descricao: " << descricao << endl
          << "4 - Logradouro: " << getEndereco().getLogradouro() << endl
          << "5 - Numero: " << getEndereco().getNumero() << endl
          << "6 - Bairro: " << getEndereco().getBairro() << endl
          << "7 - Cep: " << getEndereco().getCep() << endl
          << "8 - Cidade: " << getEndereco().getCidade() << endl
          << "9 - Posicao do apartamento: " << posicao << endl
          << "10 - Numero de quartos: " << numQuartos << endl
          << "11 - Valor do Condominio: " << valorCondominio << endl
          << "12 - Vagas garagem: " << vagasGaragem << endl
          << "13 - Area do apartamento: " << area << endl;

    return strong.str();
}

string Apartamento::toStringArquivo() {
	stringstream arquivo;

	arquivo << id << endl
		<< tipoImovel << endl
		<< tipoOferta << endl
		<< valor << endl
		<< descricao << endl
		<< endereco.getLogradouro() << endl
		<< endereco.getNumero() << endl
		<< endereco.getBairro() << endl
		<< endereco.getCep() << endl
		<< endereco.getCidade() << endl
		<< posicao << endl
		<< numQuartos << endl
		<< valorCondominio << endl
		<< vagasGaragem << endl
		<< area << endl;

	return arquivo.str();

}