#include "SistemaImobiliaria.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include <bits/stdc++.h>
#define MAIOR_QUE 1
#define MENOR_QUE 2

SistemaImobiliaria::SistemaImobiliaria(){
    //ctor
}
void SistemaImobiliaria::CadastraImovel(Imovel* im){
    listaImovel.push_back(im);
}

void SistemaImobiliaria::DeletaImovel(int indice){
    for(Imovel *i : listaImovel){
        if(i->getId() == indice){
            listaImovel.remove(i);
            cout << "Imovel com id: " << indice << " deletado com sucesso.\n";
        }else{
            cout << "Imovel nao encontrado.\n";
        }
    }
}
/*
void SistemaImobiliaria::EditaImovel(int itemEditado , int indice , string novaString , double novoValor)
{
    for(Imovel *i : listaImovel){
        if(i->getId() == indice){

            if((i->getTipoImovel() == 1) && (itemEditado>8))//no caso de casa
            {
                switch (itemEditado)
                {
                    case 9://PAVIMENTOS
                        i->setNumPavimentos(novoValor);
                        break;
                    case 10://NUMERO DE QUARTOS
                        i->setNumQuartos(novoValor);
                        break;
                    case 11://AREA DO TERRENO
                        i->setAreaTerreno(novoValor);
                        break;
                    case 12://AREA CONSTRUIDA
                        i->setAreaConstruida(novoValor);
                        break;
                    default:
                        cout<<"opcao invalida"<<endl;
                        break;
                }
            }
            else if((i->getTipoImovel() == 2) && (itemEditado>8))//no caso de apartamento
            {
                switch (itemEditado)
                {
                    case 9://POSICAO
                        i->setPosicao(novaString);
                        break;
                    case 10://NUMERO DE QUARTOS
                        i->setNumQuartos(novoValor);
                        break;
                    case 11://VALOR CONDOMINIO
                        i->setValorCondominio(novoValor);
                        break;
                    case 12://VAGAS GARAGEM
                        i->setVagasGaragem(novoValor);
                        break;
                    case 13://AREA DO AP
                        i->setArea(novoValor);
                        break;
                }
            }
            else if((i->getTipoImovel() == 3) && (itemEditado>8))//no caso de terreno
            {
                switch (itemEditado)
                {
                    case 9://AREA DO TERRENO
                        i->setArea(novoValor);
                        break;
                }
            }
            else
            {
                switch(itemEditado){
                    case 1://TIPO OFERTA
                        i->setTipoOferta(novoValor);
                        break;
                    case 2://VALOR R$
                        i->setValor(novoValor);
                        break;
                    case 3://DESCRICAO DO IMOVEL
                        i->setDescricao(novaString);
                        break;
                    case 4://LOGRADOURO
                        i->getEndereco().setLogradouro(novaString);
                        break;
                    case 5://NUMERO
                        i->getEndereco().setNumero(novoValor);
                        break;
                    case 6://BAIRRO
                        i->getEndereco().setBairro(novaString);
                        break;
                    case 7://CEP
                        i->getEndereco().setCep(novaString);
                        break;
                    case 8://CIDADE
                        i->getEndereco().setCidade(novaString);
                        break;
                }
            }
        }else{
            cout << "Imovel nao encontrado.";
        }
    }
}*/

list<Imovel*> SistemaImobiliaria::getImoveis(){
    return listaImovel;
}

list<Imovel*> SistemaImobiliaria::getDescricaoImoveis(string descricao){
    list<Imovel*> descricoes;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;

        stringMinuscula = i->getDescricao();
        stringMinuscula2 = descricao;

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size()){
            descricoes.push_back(i);
        }else{
            cout << "Imovel nao encontrado.\n";
        }
    }
        return descricoes;
}

list<Imovel*> SistemaImobiliaria::getImoveisPorTipo(int tipo){
    list<Imovel*> imoveisPorTipo;

    for(Imovel *i: listaImovel){
        if(i->getTipoImovel()==tipo)
            imoveisPorTipo.push_back(i);
    }
    return imoveisPorTipo;
}

list<Imovel*> SistemaImobiliaria::getImoveisParaAlugarPorBairro(int tipoOferta,string bairro){
    list<Imovel*> imoveisPorAluguelBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;
        stringMinuscula = i->getEndereco().getBairro();
        stringMinuscula2 = bairro;

        if(i->getTipoOferta()==tipoOferta && (stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size()))
            imoveisPorAluguelBairro.push_back(i);
        else
            cout << "Imovel nao encontrado.\n";
    }
    return imoveisPorAluguelBairro;
}

list<Imovel*> SistemaImobiliaria::getImoveisParaVenderPorBairro(int tipoOferta,string bairro){
    list<Imovel*> imoveisPorVendaBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;
        stringMinuscula = i->getEndereco().getBairro();
        stringMinuscula2 = bairro;

        if(i->getTipoOferta()==tipoOferta && (stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size()))
            imoveisPorVendaBairro.push_back(i);
        else
            cout << "Imovel nao encontrado.\n";
    }
    return imoveisPorVendaBairro;
}

list<Imovel*> SistemaImobiliaria::getImoveisPorCidade(string cidade){
    list<Imovel*> imoveisPorCidade;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;

        stringMinuscula = i->getEndereco().getCidade();
        stringMinuscula2 = cidade;

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size())
            imoveisPorCidade.push_back(i);
        }

        return imoveisPorCidade;

}

list<Imovel*> SistemaImobiliaria::getImoveisPorBairro(string bairro){
    list<Imovel*> imoveisPorBairro;

    for(Imovel *i: listaImovel){
        string stringMinuscula;
        string stringMinuscula2;

        stringMinuscula = i->getEndereco().getBairro();
        stringMinuscula2 = bairro;

        transform(stringMinuscula.begin(), stringMinuscula.end(), stringMinuscula.begin(), ::tolower);
        transform(stringMinuscula2.begin(), stringMinuscula2.end(), stringMinuscula2.begin(), ::tolower);

        if(stringMinuscula.find(stringMinuscula2)>=0 && stringMinuscula.find(stringMinuscula2) < stringMinuscula.size())
            imoveisPorBairro.push_back(i);

    }
        return imoveisPorBairro;

}

list<Imovel*> SistemaImobiliaria::getImoveisPorValor(double valor,int flag){
    list<Imovel*> imoveisPorValor;

    for(Imovel *i: listaImovel){
        if(flag == MAIOR_QUE){
            if(i->getValor()>=valor)
                imoveisPorValor.push_back(i);
        }
        else if(flag == MENOR_QUE){
            if(i->getValor()<=valor)
                imoveisPorValor.push_back(i);
        }
    }
    return imoveisPorValor;
}

list<Imovel*> SistemaImobiliaria::getImoveisPorTipoAnuncio(int tipoOferta){
    list<Imovel*> imoveisPorAnuncio;

    for(Imovel *i: listaImovel){
        if(i->getTipoOferta()==tipoOferta)
            imoveisPorAnuncio.push_back(i);
    }
    return imoveisPorAnuncio;
}

list<Imovel*> SistemaImobiliaria::getImoveisID(int id){
    list<Imovel*> imoveisID;

    for(Imovel *i: listaImovel){
        if(i->getId()==id)
            imoveisID.push_back(i);
    }
    return imoveisID;
}

void SistemaImobiliaria::exibe(list<Imovel *> list){
     for(Imovel *i : list){
        cout << i->toString() << endl;
    }
}

void SistemaImobiliaria::exibeEdit(list<Imovel *> list){
     for(Imovel *i : list){
        cout << i->toStringEdit() << endl;
    }
}