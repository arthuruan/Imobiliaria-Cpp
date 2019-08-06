#include <iostream>
#include "Casa.h"

Casa::Casa(){
    //inicialização atributos da classe imovel
    estado = 0;
    tipoOferta = 0;
    valor = 0;
    //inicialização atributos da classe casa
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0;
    areaConstrida = 0;
}

double Casa::getValor(){
    return valor;
}

int Casa::getTipoOferta(){
    return tipoOferta;
}

Endereco Casa::getEndereco(){
    return endereco;
}

string Casa::getDescricao(){
    
}