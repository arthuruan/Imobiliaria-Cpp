#include "SistemaImobiliaria.h"
#include "Menu.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

static int id;

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
    //Aparatamento                                           //
    string posicao;                                          //
    int numQuartosAP;                                        //
    double valorCondominio;                                  //
    int vagasGaragem;                                        //
    double areaAP;                                           //
    //terreno                                                //
    double areaTER;                                          //
//-----------------------------------------------------------//

    //imovel
    cout << "Imovel para venda ou aluguel: ";//implementar com string, talvez
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
    cout << "Digite o bairro: ";
    getline(cin, bairro);
    cout << "Digite o CEP: ";
    getline(cin, cep);
    cout << "Digite a cidade:";
    getline(cin, cidade);
    cout << "Digite o numero do imovel: ";
    scanf("%d", &numero);
    FLUSH;

    if(tipoImovel == 1){//Casa
        Casa *cs = new Casa();

        cout << "Digite o numero de pavimentos: ";
        scanf("%d", &numPavimentos);
        FLUSH;
        cout << "Digite o numero de quartos: ";
        scanf("%d", &numQuartosAP);
        FLUSH;
        cout << "Digite a area do terreno: ";
        scanf("%lf", &areaTerreno);
        cout << "Digite a area construida: ";
        scanf("%lf", &areaConstruida);

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
        scanf("%d", &numQuartos);
        FLUSH;
        cout << "Digite o valor do condominio: ";
        scanf("%lf", &valorCondominio);
        FLUSH;
        cout << "Digite a quantidade de vagas na garagem: ";
        scanf("%d", &vagasGaragem);
        FLUSH;
        cout << "Digite a area do AP: ";
        scanf("%lf", &areaAP);

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

void Exibe(list<Imovel *> const &list){
    for(Imovel *i : list){
        cout << i->toString() << endl;
    }
}

int main(void) {
	int flagmenu = 0;//flag criada para facilitar a navegacao entre o menu principal e os secundarios

	Menu m1 = Menu();
    SistemaImobiliaria s1 = SistemaImobiliaria();
    Imovel *cs = new Casa();
    Imovel *ap = new Apartamento();
    Imovel *ter = new Terreno();

	while (1) {

		switch (m1.Menu1()) {//switch do menu principal
		case 1://cadastro
			flagmenu = 1;
			CLEAR;
			switch (m1.Menu2()) {//switch secundario com o menu que remete opcoes para cadastro
                case 1://opcao casa
                    CLEAR;
                    cs = Cadastroall(1);
                    if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                        s1.CadastraImovel(cs);
                        flagmenu = 0;
                    }else{
                        flagmenu = 0;
                        break;
                    }
                    break;
                    flagmenu = 0;
                    break;
                case 2://opcao apartamento
                    CLEAR;
                    ap = Cadastroall(2);
                    if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                        s1.CadastraImovel(ap);
                        flagmenu = 0;
                    }else{
                        flagmenu = 0;
                        break;
                    }
                    break;
                case 3://opcao terreno
                    CLEAR;
                    ter = Cadastroall(3);
                    if(m1.Menu3()){//menu que pede a confimacao para salvar o cadastro
                        s1.CadastraImovel(ter);
                        flagmenu = 0;
                    }else{
                        flagmenu = 0;
                        break;
                    }
                    break;
                case 4://opcao voltar para o menu principal
                    flagmenu = 0;
                    break;
			}
			break;
		case 2://opcao consultar imoveis disponivel
            CLEAR;
            Exibe(s1.getImoveis());
            system("pause");
			break;
		case 3://opcao de busca
			switch (m1.Menu4()){//menu secundario para saber o tipo da busca
                case 1://busca por titulo
                    CLEAR; 
                    //getline(cin, desc);
                    //cout << s1.getDescricaoImoveis(desc);
                    flagmenu = 0;
                    break;
                case 2://busca por bairro
                    flagmenu = 0;
                    break;
                case 3://busca por valor
                    flagmenu = 0;
                    break;
                case 4://volta par ao menu principal
                    flagmenu = 0;
                    break;
			}
			break;
		case 4://opcao que exibe imovel para aluguel || venda
			switch (m1.Menu5()){//menu secundario com opcoes de aluguel ou venda
                case 1://opcao por aluguel
                    flagmenu = 0;
                    break;
                case 2://opcao por venda
                    flagmenu = 0;
                    break;
                case 3://volta menu principal
                    flagmenu = 0;
                    break;
			}
			break;
		case 5://opcao para deletar um cadastro
			break;
		case 6://opcao para editar um cadastro
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
