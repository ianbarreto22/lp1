#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>

using namespace std;

class Conta
{
    public:
    int numero;
    string titular;
    double saldo;

    void saca(double valor);
    void deposita(double valor);
    void transferencia(double valor, Conta &c);
};

#endif