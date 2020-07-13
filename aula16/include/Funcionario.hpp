#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Empresa.hpp"

#include <string>

using namespace std;

class Funcionario
{
    private:
    string nome;
    Empresa empresa;
    string departamento;
    string dataAdmissao;
    double salario;

    public:
    Funcionario();
    void setNome(string nome);
    void setDepartamento(string departamento);
    void setDataAdmissao(string data);
    void setSalario(double salario);
    void setEmpresa(Empresa empresa);
    string getEmpresa();
    string getDepartamento();
    double getSalario();
    string getNome();
    string getDataAdmissao();
};

#endif