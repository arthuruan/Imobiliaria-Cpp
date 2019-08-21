#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "GerenteDePersistencia.h"
#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <list>

class SistemaImobiliaria{
    public:
        SistemaImobiliaria();
        void CadastraImovel(Imovel *im);
        void DeletaImovel(int indice);
		void setListaImoveis(list<Imovel*> list);
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

        void exibe(list<Imovel *> list);
        void exibeEdit(list<Imovel *> list);

    private:
        list<Imovel*> listaImovel;
		GerenteDePersistencia controladorArquivo;
};

#endif // SISTEMAIMOBILIARIA_H
