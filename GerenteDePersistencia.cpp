#include "Imovel.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Casa.h"
#include "SistemaImobiliaria.h"
#include "GerenteDePersistencia.h"
#include <fstream>

using namespace std;

GerenteDePersistencia::GerenteDePersistencia()
{
    //ctor
}

list<Imovel *> GerenteDePersistencia::recuperaListaImoveis(){
    ifstream lerArquivo;

    std::list<Imovel *> listaImovel;

    int id, tipoImovel, tipoOferta, numero, numQuartos, vagasGaragem, numPavimento;

    double valor, valorCondominio, area, areaConstruida;

    string descricao, logradouro, bairro, cidade, cep, posicao;


    lerArquivo.open("imoveisSalvos.txt", ios::in);

    if(!lerArquivo.is_open( )){
        cout << "Nao foi possivel abrir arquivo!!\n";
        lerArquivo.close();
    }

    while(lerArquivo.eof()){
        lerArquivo >> id;
        lerArquivo >> tipoImovel;
        lerArquivo >> valor;
        lerArquivo >> tipoOferta;
		lerArquivo.ignore();

        getline(lerArquivo, descricao);
        getline(lerArquivo, logradouro);
        lerArquivo >> numero;
		lerArquivo.ignore();

        getline(lerArquivo, bairro);
        getline(lerArquivo, cidade);
        getline(lerArquivo, cep);

        if(tipoImovel == 1){
            lerArquivo >> numPavimento;
            lerArquivo >> numQuartos;
            lerArquivo >> area;
            lerArquivo >> areaConstruida;
			lerArquivo.ignore();

            Casa *cs = new Casa();

            cs->setId(id);
            cs->setEndereco(logradouro, numero, bairro, cep, cidade);
            cs->setTipoOferta(tipoOferta);
            cs->setDescricao(descricao);
            cs->setValor(valor);

            listaImovel.push_back(cs);
        }

        if(tipoImovel == 2){
            getline(lerArquivo, posicao);
            lerArquivo >> numQuartos;
            lerArquivo >> valorCondominio;
            lerArquivo >> vagasGaragem;
            lerArquivo >> area;
			lerArquivo.ignore();

            Apartamento *ap = new Apartamento();

            ap->setId(id);
            ap->setEndereco(logradouro, numero, bairro, cep, cidade);
            ap->setTipoOferta(tipoOferta);
            ap->setDescricao(descricao);
            ap->setValor(valor);
            ap->setPosicao(posicao);
            ap->setNumQuartos(numQuartos);
            ap->setValorCondominio(valorCondominio);
            ap->setVagasGaragem(vagasGaragem);
            ap->setArea(area);

            listaImovel.push_back(ap);
        }

        if(tipoImovel == 3){
            lerArquivo >> area;
			lerArquivo.ignore();

            Terreno *ter = new Terreno();

            ter->setId(id);
            ter->setEndereco(logradouro, numero, bairro, cep, cidade);
            ter->setTipoOferta(tipoOferta);
            ter->setDescricao(descricao);
            ter->setValor(valor);
            ter->setArea(area);

            listaImovel.push_back(ter);
        }
    }

    return listaImovel;

}

void GerenteDePersistencia::salvaListaImoveis(list<Imovel*> listaImovel)
{
    ofstream salvaArquivo;
    salvaArquivo.open("imoveisSalvos.txt", ios::out);
    // Verifica se o arquivo foi aberto corretamente
    if(!salvaArquivo.is_open( )){
        cout << "N�o foi poss�vel abrir arquivo!!\n";
        salvaArquivo.close();
        return;
    }

    for(Imovel *i: listaImovel){
        salvaArquivo << i-> toString() << endl;
    }

    salvaArquivo.close();
}
