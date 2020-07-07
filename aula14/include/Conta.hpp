#ifndef CONTA_HPP
#define CONTA_HPP

#include "Cliente.hpp"
#include "Agencia.hpp"

#include <string>

using namespace std;

class Conta
{
    public:
    unsigned numero;
    Cliente titular;
    double saldo;
    Agencia agencia;

    void saca(double valor);
    void deposita(double valor);
    void transferencia(double valor, Conta &c);
};

#endif