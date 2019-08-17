#include "SistemaImobiliaria.h"
#define MAIOR_QUE 1
#define MENOR_QUE 0

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}
void SistemaImobiliaria::CadastraImovel(Imovel* im)
{
    listaImovel.push_back(im);
}

void SistemaImobiliaria::DeletaImovel(int indice)
{
    for(Imovel *i : listaDeImoveis){
        if(i->getId() == indice){
            listaDeImoveis.remove(i);
        }
    }
}

list SistemaImobiliaria::getImoveis()
{
    return listaImovel;
}

list SistemaImobiliaria::getDescricaoImoveis()
{
    list<string> descricoes;
    string stringMinuscula;
    string stringMinuscula2;

    for(Imovel *i: listaImovel){

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size())
            descricoes.push_back(i);
    }
        return descricoes;
}

list SistemaImobiliaria::getImoveisPorTipo(int tipo)
{
    list<Imovel*> imoveisPorTipo;

    for(Imovel *i: listaImovel){
        if(Imovel i->getTipoImovel()==tipo)
            imoveisPorTipo.push_back(i);
    }
    return imoveisPorTipo;
}

list SistemaImobiliaria::getImoveisParaAlugarPorBairro(int tipoOferta,string bairro)
{
    list<Imovel*> imoveisPorAluguelBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;
        stringMinuscula = i->getEndereco()->getBairro()
        stringMinuscula2 = bairro;

        if(Imovel i->getTipoOferta()==tipoOferta && (stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size()))
            imoveisPorVendaBairro.push_back(i);
    }
    return imoveisPorAluguelBairro;
}

list SistemaImobiliaria::getImoveisParaVenderPorBairro(int tipoOferta,string bairro)
{
    list<Imovel*> imoveisPorVendaBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;
        stringMinuscula = i->getEndereco()->getBairro()
        stringMinuscula2 = bairro;

        if(Imovel i->getTipoOferta()==tipoOferta && (stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size()))
            imoveisPorVendaBairro.push_back(i);
    }
    return imoveisPorVendaBairro;
}

list SistemaImobiliaria::getImoveisPorCidade(string cidade)
{
    list<Imovel*> imoveisPorCidade;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;

        stringMinuscula = i->getEndereco()->getCidade()
        stringMinuscula2 = cidade;

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size())
            imoveisPorCidade.push_back(i);
        }

        return imoveisPorCidade;

}
list SistemaImobiliaria::getImoveisPorBairro(string bairro)
{
    list<Imovel*> imoveisPorBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;

        stringMinuscula = i->getEndereco()->getBairro()
        stringMinuscula2 = bairro;

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size())
            imoveisPorCidade.push_back(i);

    }
        return imoveisPorBairro;

}

list SistemaImobiliaria::getImoveisPorValor(float valor,int flag)
{
    list<Imovel*> imoveisPorValor;

    for(Imovel *i: listaImovel){
        if(flag == MAIOR_QUE){
            if(Imovel i->getValor()>=valor)
                imoveisPorValor.push_back(i);
        }
        else if(flag == MENOR_QUE){
            if(Imovel i->getValor()<=valor)
                imoveisPorValor.push_back(i);
        }
    }
    return imoveisPorValor;
}

list SistemaImobiliaria::getImoveisPorTipoAnuncio(int tipoOferta)
{
    list<Imovel*> imoveisPorAnuncio;

    for(Imovel *i: listaImovel){
        if(Imovel i->getTipoOferta()==tipoOferta)
            imoveisPorAnuncio.push_back(i);
    }
    return imoveisPorAnuncio;

}
