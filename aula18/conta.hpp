#include <string>
#include "cliente.hpp"

using namespace std;

class conta{
    private:
    int numero;
    cliente titular;
    double saldo;
    static int quantidadeContas;
    
    public:
    conta(cliente& titular);
    conta();
    ~conta();
    
    void setNumero(int numero);
    int getNumero();
    void setTitular(cliente titular);
    string getTitular();
    void setSaldo(double saldo);
    double getSaldo();
    int getQuantidadeContas();
    void saca(double quantidade);
    void deposita(double quantidade);
    void transfere(conta &c, double quantidade);

};

