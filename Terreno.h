#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"

class Terreno : public Imovel{
    private:
        double area;

    public:
        Terreno();

        double getArea();
        void setArea(double area);

        string toString();
        string toStringEdit();
};
#endif // TERRENO_H
