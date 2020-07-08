#include <string>

using namespace std;

class cliente{
    public:
    string nome;
    int cpf;
    static int quantidadeClientes;

    cliente(string nome, int cpf);
    cliente();
    ~cliente();
};
