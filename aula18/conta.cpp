#include "conta.hpp"

int conta::quantidadeContas;

conta::conta(cliente& titular): titular(titular){
    this->quantidadeContas += 1;
}

conta::conta(){
    this->quantidadeContas += 1;
}

conta::~conta(){
    
}
void conta::setNumero(int numero){
    this->numero = numero;
}

int conta::getNumero(){
    return this->numero;
}

void conta::setTitular(cliente titular){
    this->titular = titular;
}

string conta::getTitular(){
    return this->titular.getNome();
}

void conta::setSaldo(double saldo){
    this->saldo = saldo;
}

double conta::getSaldo(){
    return this-> saldo;
}

int conta::getQuantidadeContas(){
    return this->quantidadeContas;
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
