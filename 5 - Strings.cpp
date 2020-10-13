#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pNome = "Gabriel";
    string sNome = " Reira";
    string nome = pNome.append(sNome);
    cout << nome << endl;

    // C++ usa o + tanto para adição quanto para concatenação
    string x = "7";
    string y = "14";
    cout << x + y  << endl;

    cout << "Seu nome possui " << nome.length() << " caracteres." << endl;

    cout << nome[0] << endl;
    nome[4] = 'u';
    cout << nome << endl;

    string cidade;
    cout << "Digite o nome da sua cidade: ";
    //cin >> cidade;
    getline(cin, cidade);
    cout << "Você mora em " << cidade << endl;

    return 0;
}