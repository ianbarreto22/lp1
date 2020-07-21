#include <string>

using namespace std;

class cliente{
    private:
    string nome;
    static int quantidadeClientes;

    public:
    cliente();
    ~cliente();

    void setNome(string nome);
    string getNome();
    int getQuantidadeClientes();
};
