#include "Imovel.h"
#include <iostream>
#include "Terreno.h"

Terreno::Terreno()
{
    area = 0;
    tipoImovel = 3;
}

double Terreno::getArea()
{
    return area;
}

void Terreno::setArea(double area)
{
    if(area < 0 )
        this -> area = 0;
    else
        this -> area = area;
}
string Terreno::toString()
{
    stringstream strong;

    strong<< "Terreno\n" << "Id: " << id << endl
          << "Tipo Oferta: " << tipoOferta << endl
          << "Valor: " << valor << endl
          << "Descricao: " << descricao << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cep: " << getEndereco().getCep() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Area do terreno: " << area << endl;

    return strong.str();
}

string Terreno::toStringArquivo() {
	stringstream arquivo;

	arquivo << tipoImovel << endl
		<< id << endl
		<< tipoOferta << endl
		<< valor << endl
		<< descricao << endl
		<< endereco.getLogradouro() << endl
		<< endereco.getNumero() << endl
		<< endereco.getBairro() << endl
		<< endereco.getCep() << endl
		<< endereco.getCidade() << endl
		<< area << endl;

	return arquivo.str();

}

