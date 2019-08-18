#include "Menu.h"
Menu::Menu(){
	//construtor
}
//Menu1 de inicio do programa
int Menu::Menu1(){

	int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sCadastrar Imovel\n", ">>");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 7;
		}else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("\t%sConsultar imoveis disponiveis\n", ">>");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("\t%sBuscar imoveis\n", ">>");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 4;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 4){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("\t%sImoveis disponiveis\n", ">>");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 4;
			else if (tecla == SETA_BAIXO)
				posicao = 5;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}else if (posicao == 5){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("\t%sExcluir Imovel\n", ">>");
			printf("Editar imovel\n");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 5;
			else if (tecla == SETA_BAIXO)
				posicao = 6;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}else if (posicao == 6){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("\t%sEditar imovel\n", ">>");
			printf("Sair\n");

			tecla = getch();

			if (tecla == ENTER)
				return 6;
			else if (tecla == SETA_BAIXO)
				posicao = 7;
			else if (tecla == SETA_CIMA)
				posicao = 5;

		}
		else if (posicao == 7){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Cadastrar Imovel\n");
			printf("Consultar imoveis disponiveis\n");
			printf("Buscar imoveis\n");
			printf("Imoveis disponiveis\n");
			printf("Excluir Imovel\n");
			printf("Editar imovel\n");
			printf("\t%sSair\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 7;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 6;
		}
	}
}
//Menu2 apos o usario selecionar a opção cadastrar
int Menu::Menu2(){
    int tecla, posicao = 1;

	while (1) {

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sCasa\n", ">>");
			printf("Apartamento\n");
			printf("Terreno\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 4;
		}else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Casa\n");
			printf("\t%sApartamento\n", ">>");
			printf("Terreno\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3){

			printf("\n\tEscolha uma opcao:\n\n");
			printf("Casa\n");
			printf("Apartamento\n");
			printf("\t%sTerreno\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;

			else if (tecla == SETA_BAIXO)
				posicao = 4;

			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 4){
				printf("\n\tEscolha uma opcao:\n\n");
				printf("Casa\n", ">>");
				printf("Apartamento\n");
				printf("Terreno\n");
				printf("\t%sVoltar\n", ">>");

				tecla = getch();

				if (tecla == ENTER)
					return 4;
				else if (tecla == SETA_BAIXO)
					posicao = 1;
				else if (tecla == SETA_CIMA)
					posicao = 3;
		}
	}
}
//Menu3 para salvar as informações no arquivo
int Menu::Menu3(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER)
				//salvar arquivo
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 2){
			printf("\n\tDeseja salvar as informacoes?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

            if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}
//Menu4 para as funções de buscar por titulo, bairro e valor
int Menu::Menu4(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sTitulo\n", ">>");
			printf("Bairro\n");
			printf("Valor\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("\t%sBairro\n", ">>");
			printf("Valor\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("Bairro\n");
			printf("\t%sValor\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 3;

			else if (tecla == SETA_BAIXO)
				posicao = 4;

			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 4){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Titulo\n");
			printf("Bairro\n");
			printf("Valor\n");
			printf("\t%sVoltar\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 4;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}
	}
}
//Menu5 feito para a função disponibilidade, com opções de alguel e venda
int Menu::Menu5(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("\t%sAluguel\n", ">>");
			printf("Venda\n");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 3;
		}else if (posicao == 2){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Aluguel\n");
			printf("\t%sVenda\n", ">>");
			printf("Voltar\n");

			tecla = getch();

			if (tecla == ENTER)
				return 2;
			else if (tecla == SETA_BAIXO)
				posicao = 3;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}else if (posicao == 3){
			printf("\n\tEscolha uma opcao:\n\n");
			printf("Aluguel\n");
			printf("Venda\n");
			printf("\t%sVoltar\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 3;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}

	}
}
//Menu6 de confirmação de edição de imoveis
int Menu::Menu6(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tDeseja editar esse imovel?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER){
				return 1;
			}else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 2) {
			printf("\n\tDeseja editar esse imovel?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 0;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}
//Menu7 para confirmacao 
int Menu::Menu7(){
    int tecla, posicao = 1;

	while (1){

		CLEAR;

		if (posicao == 1){
			printf("\n\tConfirmar?\n\n");
			printf("\t%sSim\n", ">>");
			printf("Nao\n");

			tecla = getch();

			if (tecla == ENTER)
				return 1;
			else if (tecla == SETA_BAIXO)
				posicao = 2;
			else if (tecla == SETA_CIMA)
				posicao = 2;
		}else if (posicao == 2){
			printf("\n\tConfirmar?\n\n");
			printf("Sim\n");
			printf("\t%sNao\n", ">>");

			tecla = getch();

			if (tecla == ENTER)
				return 0;
			else if (tecla == SETA_BAIXO)
				posicao = 1;
			else if (tecla == SETA_CIMA)
				posicao = 1;
		}
	}
}