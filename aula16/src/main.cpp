#include "Funcionario.hpp"
#include "Empresa.hpp"

#include <iostream>
#include <vector>
#include <iomanip>
#include <locale>

using namespace std;

void imprimeMenu()
{
    cout << endl;
    cout << "[A] Criar uma empresa;" << endl;
    cout << "[B] Adicionar funcionários;" << endl;
    cout << "[C] Aumentar 10% o salário dos funcionários de um departamento;" << endl;
    cout << endl;
    cout << "[Z] Sair do programa." << endl;
    cout << endl;
    cout << "Opção: "; 
}

Empresa criarEmpresa()
{
    Empresa empresa;
    string nome, cnpj;
    cout << endl;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "CNPJ: ";
    cin >> cnpj;

    empresa.setNome(nome);
    empresa.setCNPJ(cnpj);

    return empresa;

}

Empresa procurarEmpresa(string nome, vector<Empresa> empresas)
{
    Empresa empresa;
    for(Empresa e : empresas)
    {
        if(e.getNome() == nome)
        {
            empresa = e;
        }
    }
    return empresa;
}

int main(int argc, char const *argv[])
{
    char opcao;
    vector<Empresa> empresas({});
    vector<Funcionario> funcionarios({});
    while(true)
    {
        imprimeMenu();
        cin >> opcao;
        if(toupper(opcao) == 'A')
        {
            empresas.push_back(criarEmpresa());
        }
        else if(toupper(opcao) == 'B')
        {
            Empresa empresa;
            string nomeEmpresa;
            cout << endl;
            cout << "Empresa: ";
            cin.ignore();
            getline(cin,nomeEmpresa);
            empresa = procurarEmpresa(nomeEmpresa, empresas);
            if(empresa.getNome() != "")
            {
                int n;
                cout << endl;
                cout << "Quantos funcionários deseja adicionar? ";
                cin >> n;
                for(int i(0); i<n; i++)
                {
                    Funcionario f;
                    string nome, departamento, data;
                    double salario;

                    cout << "Nome: ";
                    cin.ignore();
                    getline(cin, nome);
                    cout << "Departamento: ";
                    getline(cin, departamento);
                    cout << "Data de Admissão: ";
                    cin >> data;
                    cout << "Salário: ";
                    cin >> salario;

                    f.setNome(nome);
                    f.setDepartamento(departamento);
                    f.setDataAdmissao(data);
                    f.setEmpresa(empresa);
                    f.setSalario(salario);

                    funcionarios.push_back(f);
                }
            }
            else
            {
                cout << endl;
                cout << "Essa empresa não existe." << endl;
                cout << endl;
            }
            

        }
        else if(toupper(opcao) == 'C')
        {
            string departamento, nomeEmpresa;
            cout << "Empresa: ";
            cin.ignore();
            getline(cin, nomeEmpresa);
            cout << "Departamento: ";
            getline(cin, departamento);
            for(int i(0); i < funcionarios.size(); i++)
            {
                if(funcionarios[i].getEmpresa() == nomeEmpresa && funcionarios[i].getDepartamento() == departamento)
                {
                    double novoSalario = funcionarios[i].getSalario() * 0.1 + funcionarios[i].getSalario();
                    funcionarios[i].setSalario(novoSalario);
                }
            }
        }
        else if(toupper(opcao) == 'Z')
        {
            break;
        }
        else
        {
            cout << endl;
            cout << "Opção inválida." << endl;
            cout << endl;
        }
        
    }


    cout << "\nEmpresas: " << endl;
    for(Empresa e : empresas)
    {
        cout << "-Nome: " << e.getNome() << " | CNPJ: " << e.getCNPJ() << endl;
    }
    cout << endl;
    cout << "Funcionarios: " << endl;
    for(Funcionario f : funcionarios)
    {
        cout << "-Nome: " << f.getNome() << " | Departamento: " << f.getDepartamento();
        cout << " |  Data de Admissão: " << f.getDataAdmissao() << " | Salário: ";
        cout << setprecision (2) << fixed << f.getSalario() << " | Empresa: ";
        cout << f.getEmpresa() << endl;
    }

    return 0;
}
