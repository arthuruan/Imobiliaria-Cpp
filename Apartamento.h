#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

using namespace std;

class Apartamento: public Imovel{
    protected:
        string posicao;
        int numQuartos;
        double valorCondominio;
        int vagasGaragem;
        double area;
    public:
        Apartamento();

        std::string MostraString();
        std::string getPosicao();
        int getNumQuartos();
        double getValorCondominio();
        int getVagasGaragem();
        double getArea();

        void setPosicao(std::string posicao);
        void setNumQuartos(int numQuartos);
        void setValorCondominio(double valorCondominio);
        void setVagasGaragem(int vagasGaragem);
        void setArea(double area);
};

#endif // APARTAMENTO_H
