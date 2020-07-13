#ifndef EMPRESA_HPP
#define EMPRESA_HPP


#include <string>
#include <vector>

using namespace std;

class Empresa
{
    private:
    string nome;
    string cnpj;

    public:
    Empresa();

    void setNome(string nome);
    string getNome();
    void setCNPJ(string cnpj);
    string getCNPJ();
};

#endif