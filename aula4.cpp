#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &prog_name);
void print_message(const std::string &message);
void list_messages();

int main(int argc, char const *argv[])
{
	if(argc == 1){

		show_usage(argv[0]);
		return 1;

	}

	std::string action = argv[1];

	if(action == "add"){

		if(argc > 2){
			print_message(argv[2]);
		}
		
		else{

			std::string message;
			std::cout << "Informe a mensagem: ";
			std::getline(std::cin, message);
			print_message(message);
		}	

	}

	else if(action == "list")
		list_messages();

	else{

		std::cout << "Comando Inválido." << std::endl;
		return 1; 

	}

	return 0;

}

void show_usage(const std::string &prog_name){

	std::cout << "Uso: " << prog_name << " <comando> <mensagem>" << std::endl;

}

void print_message(const std::string &message){

	std::ofstream file("messages.txt", std::ios::app);

	if(!file.is_open()){
		std::cerr << "O arquivo não pode ser criado." << std::endl;
		return;
	}

	file << message << "\n";
	file.close();
	std::cout << "Mensagem adicionada." << std::endl;

}

void list_messages(){

	std::ifstream file("messages.txt");

	if(!file.is_open()){
		std::cerr << "O arquivo não existe ou não pode ser lido." << std::endl;
		return;
	}

	int line_number = 0;
	std::string message;

	while(!file.eof()){
		++line_number;
		std::getline(file, message);

		if(message.size() == 0){
			continue;
		}

		std::cout << line_number << "- " << message << std::endl;

	}

	file.close();

}