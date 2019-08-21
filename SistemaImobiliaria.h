#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "Imovel.h"
#include "GerenteDePersistencia.h"
#include <list>

class SistemaImobiliaria{
    public:
        SistemaImobiliaria();
        void CadastraImovel(Imovel *im);
        void DeletaImovel(int indice);
        void setListaImovel(list<Imovel *> list);
        list<Imovel*> getImoveis();
        list<Imovel*> getDescricaoImoveis(string descricao);//"titulo" do imovel
        list<Imovel*> getImoveisPorTipo(int tipo);
        list<Imovel*> getImoveisParaAlugarPorBairro(int tipoOferta,string bairro);
        list<Imovel*> getImoveisParaVenderPorBairro(int tipoOferta,string bairro);
        list<Imovel*> getImoveisPorBairro(string bairro);
        list<Imovel*> getImoveisPorCidade(string cidade);
        list<Imovel*> getImoveisPorValor(double valor, int flag);
        list<Imovel*> getImoveisPorTipoAnuncio(int tipo);
        list<Imovel*> getImoveisID(int id);
        GerenteDePersistencia getControladorArquivo();
        
        void exibe(list<Imovel *> lista);

    private:
        list<Imovel*> listaImovel;
        GerenteDePersistencia controladorArquivo;

};

#endif // SISTEMAIMOBILIARIA_H
