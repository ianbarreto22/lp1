#include "conta.hpp"

int conta::quantidadeContas;

conta::conta(cliente titular){
    this->titular = titular;
    this->quantidadeContas += 1;
}

conta::conta(){
    this->quantidadeContas += 1;
}

conta::~conta(){
    
}

void conta::saca(double quantidade){
    this->saldo -= quantidade;
}

void conta::deposita(double quantidade){
    this->saldo += quantidade;
}

void conta::transfere(conta &c, double quantidade){
    c.deposita(quantidade);
    this->saldo -= quantidade;
}
