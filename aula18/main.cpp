#include <iostream>
#include "conta.hpp"

using namespace std;

int main(){
    cliente clC;
    cliente clD;

    cout << "Quantidade de clientes: " << clC.getQuantidadeClientes() << endl;

    clC.setNome("João");
    clD.setNome("Maria");

    conta c(clC);
    conta d(clD);
    conta e(d);

    cout << "Titular da conta C: " << c.getTitular() << endl;
    cout << "Titular da conta D: " << d.getTitular() << endl;
    cout << "Titular da conta E: " << e.getTitular() << endl;
    c.setSaldo(20);
    c.saca(15);

    cout << "Saldo da conta C: " << c.getSaldo() << endl;

    c.deposita(50);
    c.transfere(d, 45);

    cout << "Saldo da conta C: " << c.getSaldo() << endl;
    cout << "Saldo da conta D: " << d.getSaldo() << endl;
    cout << "Quantidade de contas: " << c.getQuantidadeContas() << endl;
    cout << "Quantidade de clientes: " << clC.getQuantidadeClientes() << endl;

    return 0;
}
