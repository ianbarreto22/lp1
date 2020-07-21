#include "cliente.hpp"

int cliente::quantidadeClientes;

cliente::cliente(){
    this->quantidadeClientes += 1;
}

cliente::~cliente(){

}

void cliente::setNome(string nome){
    this->nome = nome;
}

string cliente::getNome(){
    return this->nome;
}

int cliente::getQuantidadeClientes(){
    return this->quantidadeClientes;
}