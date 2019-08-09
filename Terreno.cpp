#include "Imovel.h"
#include <iostream>
#include "Terreno.h"

Terreno::Terreno()
{
    area = 0;
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
        this ->area = area;
}
