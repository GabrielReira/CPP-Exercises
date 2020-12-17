#include <iostream>
#include <string>
using namespace std;

int main ()
{
    cout << "==== INVERTENDO PALAVRA ====\n";
    string palavra;
    char aux;

    cout << "Digite uma palavra >>> ";
    getline(cin, palavra);
    int final = palavra.length() - 1;

    for (int i=0; i<final; i++)
    {
        aux = palavra[i];
        palavra[i] = palavra[final];
        palavra[final] = aux;
        final --;
    }
    cout << palavra; 


    cout << "==== INVERTENDO NÚMERO ====\n";
    int num = 0;
    int inv = 0;

    cout << "Digite um número >>> ";
    cin >> num;

    while (num != 0)
    {
        inv += num%10;
        num = num/10;
        inv *= 10;
    } cout << inv/10;
 

    cout << "==== SOMANDO OS DÍGITOS ====\n";
    int num = 0;

    cout << "Digitas um numeral >>> ";
    cin >> num;

    while ((num/10) != 0)
    {
        int soma = 0;
        while (num != 0)
        {
            soma += num%10;
            num /= 10; //num = num/10
        }
        num = soma;
        cout << "A soma está sendo => " << soma << endl;
    }
    cout << num;

    return 0;
}