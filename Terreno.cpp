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

string Terreno::toStringEdit()
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
          << "9 - Area do terreno: " << area << endl;

    return strong.str();
}

