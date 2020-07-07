#include <iostream>
#include "conta.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Conta a;
    a.saldo = 0;  

    Conta b;
    b.saldo = 0;

    a.deposita(200);
    cout << "Saldo de A: " << a.saldo << endl;

    a.saca(100);
    cout << "Saldo de A: " << a.saldo << endl;

    a.transferencia(50, b);
    cout << "Saldo de A: " << a.saldo << endl;
    cout << "Saldo de B: " << b.saldo << endl;  

    return 0;
}
