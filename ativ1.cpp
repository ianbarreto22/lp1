#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string const add = "add";
	std::string mensagem;

	if(argc == 1){
		std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
		return -1;

	}

	else if(argc == 2){

		if(add.compare(argv[1])!=0){
			std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
			return -1;
		}

		std::cout << "Digite uma mensagem: ";
		std::getline(std::cin, mensagem);
		std::cout << "Mensagem Adicionada" << std::endl;

	}

	else if(argc == 3){

		if(add.compare(argv[1])!=0){
			std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
			return -1;
		}

		std::cout << "Mensagem Adicionada" << std::endl;

	}

	return 0;
}
