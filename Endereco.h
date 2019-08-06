#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

using namespace std;

class Endereco{
    public:
        Endereco();
    private:
        string rua;
        int numero;
        string bairro;
        string cep;
        string cidade;
};

#endif // ENDERECO_H