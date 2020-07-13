#include "Funcionario.hpp"

using namespace std;

Funcionario::Funcionario()
{
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

void Funcionario::setDepartamento(string departamento)
{
    this->departamento = departamento;
}

void Funcionario::setDataAdmissao(string data)
{
    this->dataAdmissao = data;
}

void Funcionario::setEmpresa(Empresa empresa)
{
    this->empresa = empresa;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}

string Funcionario::getEmpresa()
{
    return this->empresa.getNome();
}

string Funcionario::getDepartamento()
{
    return this->departamento;
}

double Funcionario::getSalario()
{
    return this->salario;
}

string Funcionario::getNome()
{
    return this->nome;
}

string Funcionario::getDataAdmissao()
{
    return this->dataAdmissao;
}