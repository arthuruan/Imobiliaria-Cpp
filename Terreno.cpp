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
          << "Tipo Imovel: " << tipoImovel << endl
          << "Valor: " << valor << endl
          << "Logradouro: " << getEndereco().getLogradouro() << endl
          << "Numero: " << getEndereco().getNumero() << endl
          << "Bairro: " << getEndereco().getBairro() << endl
          << "Cidade: " << getEndereco().getCidade() << endl
          << "Estado: " << getEndereco().getCep() << endl
          << "Area do terreno: " << area << endl;

    return strong.str();
}



