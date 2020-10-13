#include <iostream>
#include <string>
using namespace std;

struct Pessoa
{
    string nome;
    string sobrenome;
    int idade;
    string cpf;
};

struct Janela
{
    string titulo;
    int left;
    int top;
};

int main ()
{
    Pessoa a, b;
    a.nome = "Aldonir";
    a.sobrenome = "Volonde";
    a.idade = 87;
    a.cpf = "387.754.876-10";
    b.nome = "Batalua";
    b.idade = 71;
    cout << a.nome << " tem " << b.idade << " anos.";

    Janela j1;
    j1.titulo = "Windows";
    j1.left = 5;
    j1.top = 14;
    cout << "\nO título é " << j1.titulo
         << ".\nMargem esquerda de " << j1.left
         << "\nMargem do topo de " << j1.top;
    Janela j2;
    j2.titulo = "IOS";
    j2.left = 21;
    j2.top = 29;
    cout << "\nO título é " << j2.titulo
         << ".\nMargem esquerda de " << j2.left
         << "\nMargem do topo de " << j2.top;
    
    cout << "\nA soma entre todas as margens é de >>> "
         << j1.left + j1.top + j2.left + j2.top;

    return 0;
}