#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>

using namespace std;

class Endereco{
    public:
        Endereco();
        string getLogradouro();
        int getNumero();
        string getBairro();
        string getCep();
        string getCidade();

        void setLogradouro(string logradouro);
        void setNumero(int numero);
        void setBairro(string bairro);
        void setCep(string cep);
        void setCidade(string cidade);

    protected:
        string logradouro;
        int numero;
        string bairro;
        string cep;
        string cidade;
};

#endif // ENDERECO_H
