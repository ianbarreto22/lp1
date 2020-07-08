#include "cliente.hpp"


using namespace std;

int cliente::quantidadeClientes(0);

cliente::cliente(string nome, int cpf){
    this->nome = nome;
    this->cpf = cpf;
    this->quantidadeClientes += 1;
}

cliente::cliente(){
    this->quantidadeClientes += 1;
}

cliente::~cliente(){

}
