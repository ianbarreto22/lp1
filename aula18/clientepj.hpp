#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include "cliente.hpp"

using namespace std;

class  ClientePJ : public cliente
{
    private:
    string cnpj;

    public:

    void setCNPJ(string CNPJ);
    string getCNPJ();
};

#endif