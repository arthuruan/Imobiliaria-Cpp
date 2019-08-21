#include "SistemaImobiliaria.h"
#include "Menu.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "GerenteDePersistencia.h"

static int id = 1;

Imovel* Cadastroall(int tipoImovel){
 //----------------------------------------------------------//
    //endereco                                               //
    string logradouro, bairro, cep, cidade;                  //
    int numero;                                              //
    //imovel                                                 //
    string descricao;                                        //
    int tipoOferta;                                          //
    double valor;                                            //
    //casa                                                   //
    int numPavimentos;                                       //
    int numQuartos;                                          //
    double areaTerreno;                                      //
    double areaConstruida;                                   //
    //Apartamento                                            //
    string posicao;                                          //
    int numQuartosAP;                                        //
    double valorCondominio;                                  //
    int vagasGaragem;                                        //
    double areaAP;                                           //
    //terreno                                                //
    double areaTER;                                          //
//-----------------------------------------------------------//

    //imovel
    cout << "Imovel para aluguel(1) ou venda(2): ";//implementar com string, talvez
    scanf("%d", &tipoOferta);
    FLUSH;
    cout << "Valor do Imovel: ";
    scanf("%lf", &valor);
    FLUSH;
    cout << "Mais informacoes: ";
    getline(cin, descricao);
    //endereco
    cout << "Digite o logradouro: ";    
    getline(cin, logradouro);
    cout << "Digite o numero do imovel: ";
    scanf("%d", &numero);
    FLUSH;
    cout << "Digite o bairro: ";
    getline(cin, bairro);
    cout << "Digite o CEP: ";
    getline(cin, cep);
    cout << "Digite a cidade: ";
    getline(cin, cidade); 

    if(tipoImovel == 1){//Casa
        Casa *cs = new Casa();

        cout << "Digite o numero de pavimentos: ";
        scanf("%d", &numPavimentos);
        FLUSH;
        cout << "Digite o numero de quartos: ";
        scanf("%d", &numQuartos);
        FLUSH;
        cout << "Digite a area do terreno: ";
        scanf("%lf", &areaTerreno);
        FLUSH;
        cout << "Digite a area construida: ";
        scanf("%lf", &areaConstruida);
        FLUSH;

        cs->setTipoImovel(1);
        cs->setTipoOferta(tipoOferta);
        cs->setValor(valor);
        cs->setEndereco(logradouro, numero, bairro, cep, cidade);
        cs->setDescricao(descricao);
        cs->setNumPavimentos(numPavimentos);
        cs->setNumQuartos(numQuartos);
        cs->setAreaTerreno(areaTerreno);
        cs->setAreaContruida(areaConstruida);
        cs->setId(id);
        id++;
        return cs;

    }else if(tipoImovel == 2){//Apartamento
        Apartamento *ap = new Apartamento();

        cout << "Digite a posicao do AP: ";
        getline(cin, posicao);
        cout << "Digite o numero de quartos: ";
        scanf("%d", &numQuartosAP);
        FLUSH;
        cout << "Digite o valor do condominio: ";
        scanf("%lf", &valorCondominio);
        FLUSH;
        cout << "Digite a quantidade de vagas na garagem: ";
        scanf("%d", &vagasGaragem);
        FLUSH;
        cout << "Digite a area do AP: ";
        scanf("%lf", &areaAP);
        FLUSH;

        ap->setTipoImovel(2);
        ap->setTipoOferta(tipoOferta);
        ap->setValor(valor);
        ap->setEndereco(logradouro, numero, bairro, cep, cidade);
        ap->setDescricao(descricao);
        ap->setPosicao(posicao);
        ap->setNumQuartos(numQuartosAP);
        ap->setValorCondominio(valorCondominio);
        ap->setVagasGaragem(vagasGaragem);
        ap->setArea(areaAP);
        ap->setId(id);
        id++;

        return ap;

    }else if(tipoImovel == 3){//Terreno
        Terreno *ter = new Terreno();

        cout << "Digite o tamanho do terreno: ";
        scanf("%lf", &areaTER);
        FLUSH;

        ter->setTipoImovel(3);
        ter->setTipoOferta(tipoOferta);
        ter->setValor(valor);
        ter->setEndereco(logradouro, numero, bairro, cep, cidade);
        ter->setDescricao(descricao);
        ter->setArea(areaTER);
        ter->setId(id);
        id++;

        return ter;
    }
}
//implementar sabendo que user ja inseriu tipoimovel e indice
Imovel* EditaImovel(int tipoImovel, int itemEdit){
    //-------------------------------------------------------//
    //endereco                                               //
    string logradouro, bairro, cep, cidade;                  //
    int numero;                                              //
    //imovel                                                 //
    string descricao;                                        //
    int tipoOferta;                                          //
    double valor;                                            //
    //casa                                                   //
    int numPavimentos;                                       //
    int numQuartos;                                          //
    double areaTerreno;                                      //
    double areaConstruida;                                   //
    //Aparatamento                                           //
    string posicao;                                          //
    int numQuartosAP;                                        //
    double valorCondominio;                                  //
    int vagasGaragem;                                        //
    double areaAP;                                           //
    //terreno                                                //
    double areaTER;                                          //
    //-------------------------------------------------------//

    if(tipoImovel == 1)//CASA
    {
        Casa *cs = new Casa();
        

        switch(itemEdit)
        {
            case 1://TIPO OFERTA
                scanf("%d", &tipoOferta);
                FLUSH;
                cs->setTipoOferta(tipoOferta);
                break;
            case 2://VALOR R$
                scanf("%lf", &valor);
                FLUSH;
                cs->setValor(valor);
                break;
            case 3://DESCRICAO DO IMOVEL
                getline(cin, descricao);
                cs->setDescricao(descricao);
                break;
            case 4://LOGRADOURO
                getline(cin, logradouro);
                cs->getEndereco().setLogradouro(logradouro);
                break;
            case 5://NUMERO
                scanf("%d", &numero);
                FLUSH;
                cs->getEndereco().setNumero(numero);
                break;
            case 6://BAIRRO
                getline(cin, bairro);
                cs->getEndereco().setBairro(bairro);
                break;
            case 7://CEP
                getline(cin, cep);
                cs->getEndereco().setCep(cep);
                break;
            case 8://CIDADE
                getline(cin, cidade);
                cs->getEndereco().setCidade(cidade);
                break;
            case 9://PAVIMENTOS
                scanf("%d", &numPavimentos);
                FLUSH;
                cs->setNumPavimentos(numPavimentos);
                break;
            case 10://NUMERO DE QUARTOS
                scanf("%d", &numQuartos);
                FLUSH;
                cs->setNumQuartos(numQuartos);
                break;
            case 11://AREA DO TERRENO
                scanf("%lf", &areaTerreno);
                FLUSH;
                cs->setAreaTerreno(areaTerreno);
                break;
            case 12://AREA CONSTRUIDA
                scanf("%lf", &areaConstruida);
                FLUSH;
                cs->setAreaContruida(areaConstruida);
                break;
            default:
                cout<<"opcao invalida"<<endl;
                break; 
        }
    return cs; 
    }else if(tipoImovel == 2)//APARTAMENTO
    {
        Apartamento * ap = new Apartamento();

        switch(itemEdit)
        {
            case 1://TIPO OFERTA
                scanf("%d", &tipoOferta);
                FLUSH;
                ap->setTipoOferta(tipoOferta);
                break;
            case 2://VALOR R$
                scanf("%lf", &valor);
                FLUSH;
                ap->setValor(valor);
                break;
            case 3://DESCRICAO DO IMOVEL
                getline(cin, descricao);
                ap->setDescricao(descricao);
                break;
            case 4://LOGRADOURO
                getline(cin, logradouro);
                ap->getEndereco().setLogradouro(logradouro);
                break;
            case 5://NUMERO
                scanf("%d", &numero);
                FLUSH;
                ap->getEndereco().setNumero(numero);
                break;
            case 6://BAIRRO
                getline(cin, bairro);
                ap->getEndereco().setBairro(bairro);
                break;
            case 7://CEP
                getline(cin, cep);
                ap->getEndereco().setCep(cep);
                break;
            case 8://CIDADE
                getline(cin, cidade);
                ap->getEndereco().setCidade(cidade);
                break;
            case 9://POSICAO
                getline(cin, posicao);
                ap->setPosicao(posicao);
                break;
            case 10://NUMERO DE QUARTOS
                scanf("%d", &numQuartosAP);
                FLUSH;
                ap->setNumQuartos(numQuartosAP);
                break;
            case 11://VALOR CONDOMINIO
                scanf("%lf", &valorCondominio);
                FLUSH;
                ap->setValorCondominio(valorCondominio);
                break;
            case 12://VAGAS GARAGEM
                scanf("%d", &vagasGaragem);
                FLUSH;
                ap->setVagasGaragem(vagasGaragem);
                break;
            case 13://AREA DO AP
                scanf("%lf", &areaAP);
                FLUSH;
                ap->setArea(areaAP);
                break;
            default:
                cout<<"opcao invalida"<<endl;
                break; 
        }
    return ap;
    }else if(tipoImovel == 3)//TERRENO
    {
        Terreno *ter = new Terreno;

        switch(itemEdit)
        {
            case 1://TIPO OFERTA
                scanf("%d", &tipoOferta);
                FLUSH;
                ter->setTipoOferta(tipoOferta);
                break;
            case 2://VALOR R$
                scanf("%lf", &valor);
                FLUSH;
                ter->setValor(valor);
                break;
            case 3://DESCRICAO DO IMOVEL
                getline(cin, descricao);
                ter->setDescricao(descricao);
                break;
            case 4://LOGRADOURO
                getline(cin, logradouro);
                ter->getEndereco().setLogradouro(logradouro);
                break;
            case 5://NUMERO
                scanf("%d", &numero);
                FLUSH;
                ter->getEndereco().setNumero(numero);
                break;
            case 6://BAIRRO
                getline(cin, bairro);
                ter->getEndereco().setBairro(bairro);
                break;
            case 7://CEP
                getline(cin, cep);
                ter->getEndereco().setCep(cep);
                break;
            case 8://CIDADE
                getline(cin, cidade);
                ter->getEndereco().setCidade(cidade);
                break;
            case 9://AREA DO TERRENO
                scanf("%lf", &areaTER);
                FLUSH;
                ter->setArea(areaTER);
                break;
            default:
                cout<<"opcao invalida"<<endl;
                break;
        }
    return ter;
    }
}

list<Imovel*> listaGenerica;

int main(void) {
	int flagmenu = 0;//flag criada para facilitar a navegacao entre o menu principal e os secundarios

	Menu m1 = Menu();
    SistemaImobiliaria *s1 = new SistemaImobiliaria();
    Imovel *cs = new Casa();
    Imovel *ap = new Apartamento();
    Imovel *ter = new Terreno();
    GerenteDePersistencia *g1 = new GerenteDePersistencia();
    
    string des, bair, cid;
    int tipo, ind, idEdita, itemEdit;
    double val;


	listaGenerica = s1->getControladorArquivo()-> recuperaListaImoveis();
	s1-> setListaDeImoveis(listaGenerica);
	s1-> exibe(s1->getImoveis());

	while (1) {

		switch (m1.Menu1()) {//switch do menu principal
            case 1://cadastro
                CLEAR;
                switch (m1.Menu2()) {//switch secundario com o menu que remete opcoes para cadastro
                    case 1://opcao casa
                        CLEAR;
                        cs = Cadastroall(1);
                        if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                            s1->CadastraImovel(cs);
                            g1->salvaListaImoveis(s1->getImoveis());
                        }else{
                            break;
                        }
                        flagmenu = 0;
                        break;
                    case 2://opcao apartamento
                        CLEAR;
                        ap = Cadastroall(2);
                        if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                            s1->CadastraImovel(ap);
                        }else{
                            break;
                        }
                        break;
                    case 3://opcao terreno
                        CLEAR;
                        ter = Cadastroall(3);
                        if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                            s1->CadastraImovel(ter);
                        }else{
                            break;
                        }
                        break;
                    case 4://opcao voltar para o menu principal
                        break;
                }
                break;
            case 2://opcao consultar imoveis disponivel
                CLEAR;
                s1->exibe(s1->getImoveis());
                PAUSE;
                break;
            case 3://opcao de busca
                switch (m1.Menu4()){//menu secundario para saber o tipo da busca
                    case 1://busca por titulo
                        CLEAR;
                        cout << "Digite a descricao: "; 
                        getline(cin, des);
                        CLEAR;
                        s1->exibe(s1->getDescricaoImoveis(des));
                        PAUSE;
                        break;
                    case 2://busca por bairro
                        switch(m1.Menu8()){
                            case 1://alguel
                                CLEAR;
                                cout << "Digite o bairro: ";
                                getline(cin, bair);
                                cout << endl;
                                s1->exibe(s1->getImoveisParaAlugarPorBairro(1, bair));
                                PAUSE;
                                break;
                            case 2://venda
                                CLEAR;
                                cout << "Digite o bairro: ";
                                getline(cin, bair);
                                cout << endl;
                                s1->exibe(s1->getImoveisParaVenderPorBairro(2, bair));
                                PAUSE;
                                break;
                            case 3:
                                break;
                        }
                        break;
                    case 3://busca por valor
                        switch(m1.Menu9()){
                            case 1://maior
                                CLEAR;
                                cout << "Digite o valor: ";
                                scanf("%lf", &val);
                                FLUSH;
                                s1->exibe(s1->getImoveisPorValor(val, 1));
                                PAUSE;
                                break;
                            case 2://menor
                                CLEAR;
                                cout << "Digite o valor: ";
                                scanf("%lf", &val);
                                FLUSH;
                                s1->exibe(s1->getImoveisPorValor(val, 2));
                                PAUSE;
                                break;
                            case 3:
                                break;
                        }
                        break;
                    case 4://tipo imovel
                        switch(m1.Menu2()){
                            case 1://casa
                                CLEAR;
                                s1->exibe(s1->getImoveisPorTipo(1));
                                PAUSE;
                                break;
                            case 2://apartamento
                                CLEAR;
                                s1->exibe(s1->getImoveisPorTipo(2));
                                PAUSE;
                                break;
                            case 3://terreno
                                CLEAR;
                                s1->exibe(s1->getImoveisPorTipo(3));
                                PAUSE;
                                break;
                            case 4:
                                break;
                        }
                        break;
                    case 5: 
                        break;
                }
                break;
            case 4://opcao que exibe imovel para aluguel || venda
                switch (m1.Menu5()){//menu secundario com opcoes de aluguel ou venda
                    case 1://opcao por aluguel
                        CLEAR;
                        s1->exibe(s1->getImoveisPorTipoAnuncio(1));
                        PAUSE;
                        break;
                    case 2://opcao por venda
                        CLEAR;
                        s1->exibe(s1->getImoveisPorTipoAnuncio(2));
                        PAUSE;
                        break;
                    case 3://volta menu principal
                        break;
                }
                break;
            case 5://opcao para deletar um cadastro
                CLEAR;
                cout << "Digite o indice do imovel que desesejas excluir: ";
                scanf("%d", &ind);
                FLUSH;
                cout << endl;
                s1->DeletaImovel(ind);
                g1->salvaListaImoveis(s1->getImoveis());
                PAUSE;
                break;
            case 6://opcao para editar um cadastro
                switch(m1.Menu2())
                {
                    case 1:
                        CLEAR;
                        s1->exibe(s1->getImoveisPorTipo(1));
                        PAUSE;
                        CLEAR;
                        cout<<"Insira o Id do imovel que desejas editar: "<<endl;
                        scanf("%d", &idEdita);
                        FLUSH;
                        CLEAR;
                        s1->exibeEdit(s1->getImoveisID(idEdita));
                        //cs->toStringEdit();
                        PAUSE;
                        cout<<"Qual item desejas editar?"<<endl;
                        scanf("%d", &itemEdit);
                        FLUSH;
                        cs = EditaImovel(1, itemEdit);
                        s1->CadastraImovel(cs);
                        s1->DeletaImovel(idEdita);

                        break;
                    case 2:

                        break;
                    case 3:

                        break;
                    case 4:
                        break;
                }
                break;
            case 7://encerrar o programa
                flagmenu = 1;
                break;
		}//fim do switch principal
		if (flagmenu)//if criado para sair do while
			break;
	}//fim do while

	return 0;
}//fim da funcao main