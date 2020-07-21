#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

using namespace std;

class Funcionario
{
    private:
    string nome;
    double salario;

    public:
    void setNome(string nome);
    void setSalario(double salario);
    string getNome();
    double getSalario();

};

#endif