#include "Conta.hpp"

void Conta::saca(double valor)
{
    this->saldo -= valor;
}

void Conta::deposita(double valor)
{
    this->saldo += valor;
}

void Conta::transferencia(double valor, Conta &c)
{
    Conta* conta = &c;
    this->saldo -= valor;
    conta->saldo += valor;
}