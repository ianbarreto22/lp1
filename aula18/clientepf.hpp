#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include "cliente.hpp"

using namespace std;

class ClientePF  : public cliente
{
    private:
    string cpf;

    public:

    void setCPF(string cpf);
    string getCPF();
};

#endif