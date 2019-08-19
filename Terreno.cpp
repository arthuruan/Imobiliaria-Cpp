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

    strong<<"Id":id
          <<"Tipo Oferta:"<< tipoOferta
          <<"Tipo Imovel:"<< tipoImovel
          <<"Valor:" << valor
          <<"Logradouro:"<<getEndereco().getLogradouro()
          <<"Numero:"<<getEndereco().getNumero()
          <<"Bairro:"<<getEndereco().getBairro()
          <<"Cidade:"<<getEndereco().getCidade()
          <<"Estado:"<<getEndereco().getCep()
          <<"Area do terreno:"<<area;

    return strong;
}



