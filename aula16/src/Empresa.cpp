#include "Empresa.hpp"

using namespace std;

Empresa::Empresa() : nome(""), cnpj("")
{
}

void Empresa::setNome(string nome)
{
    this->nome = nome;
}

string Empresa::getNome()
{
    return this->nome;
}

void Empresa::setCNPJ(string cnpj)
{
    this->cnpj = cnpj;
}

string Empresa::getCNPJ()
{
    return this->cnpj;
}