#include <iostream>
using namespace std;

int main()
{
    cout << "==== VERIFICADOR DE NÚMEROS ====" << endl;
    cout << "Quantos números você gostaria de verificar? >>> ";
    int n = 0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "O que você gostaria de saber de um número? \nDigite 1 para saber se ele é par \n2 para saber se é primo \nOu 3 para Fibonacci." << endl;
        int op;
        cin >> op;
        cout << "Agora digite o número a ser verificado >>> ";
        int num = 0;
        cin >> num;

        switch (op)
        {
        case 1: {
            cout << "\n==== PAR OU ÍMPAR =====" << endl;

            if (num%2 == 0){
                cout << "Par!";
            } else {
                cout << "Ímpar!";
            }
            break;
        }
        case 2: {
            cout << "\n==== PRIMO OU NÃO PRIMO ====" << endl;

            if ((num%2 == 0 && num != 2) || num%3 == 0 || num%5 == 0 ) {
                cout << "Não primo." << endl;
            } else {
                cout << "Primo!" << endl;
            }
            break;
        }
        case 3:{
            cout << "\n==== FIBONACCI ====" << endl;

            long int soma = 1, ant = 0;

            for (int i=0; i<num; i++)
            {
                soma += ant;
                ant = soma - ant;
                cout << i+1 << " = " << soma << endl;
            }
            break;
        }
        default:
            cout << "Valor digitado inválido." << endl;
            break;
        }
    }
    cin.get();
    return 0;
}