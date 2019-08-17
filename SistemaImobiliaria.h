#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include <list>

class SistemaImobiliaria{
    public:
        SistemaImobiliaria();
        void CadastraImovel(Imovel im);
        list<Imovel> getImoveis();
        list<Imovel> getDescricaoImoveis();
        list<Imovel> getImoveisPorTipo();
        list<Imovel> getImoveisParaAlugarPorBairro();
        list<Imovel> getImoveisParaVenderPorBairro();
        list<Imovel> getImoveisPorCidade();

    private:
        list<Imovel> listaImovel;
};

#endif // SISTEMAIMOBILIARIA_H
