#include "funcionario.hpp"

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}

string Funcionario::getNome()
{
    return this->nome;
}

double Funcionario::getSalario()
{
    return this->salario;
}