#include <iostream>
using namespace std;

int main()
{
    char op;
    float n1, n2;

    cout << "Escolha um operador: \n+ ou - ou * ou /" << endl;
    cin >> op;
    cout << "Digite os operandos: ";
    cin >> n1 >> n2;

    switch (op)
    {
        case '+':
            cout << n1 << " + " << n2 << " = " << n1+n2;
            break;
        case '-':
            cout << n1 << " - " << n2 << " = " << n1-n2;
            break;
        case '*':
            cout << n1 << " * " << n2 << " = " << n1*n2;
            break;
        case '/':
            cout << n1 << " / " << n2 << " = " << n1/n2;
            break;
    
        default:
            cout << "Operador não válido.";
            break;
    return 0;
    }

    //Quando tiver muitas escolhas a serem feitas, melhor optar pelo switch.
    //Confere melhor legibilidade ao código.
    int dia;
    cout << endl <<  "Digite um número de 1 a 7: ";
    cin >> dia;

    switch (dia)
    {
        case 1:
            cout << "Domingo.";
            break;
        case 2:
            cout << "Segunda.";
            break;
        case 3:
            cout << "Terça.";
            break;
        case 4:
            cout << "Quarta.";
            break;
        case 5:
            cout << "Quinta.";
            break;
        case 6:
            cout << "Sexta.";
            break;
        case 7:
            cout << "O sábado, por fundamentação bíblica e etimológica, é considerado o sétimo dia da semana.";
            break;
        default:
            cout << "Você não digitou um número válido.";
            break;
    }
    return 0;

    char l;
    cout << endl << "Digite uma letra de A a G: ";
    cin >> l;

    switch (l)
    {
        case 'a':
        case 'A':
            cout << "Autuori";
            break;
        case 'b':
        case 'B':
            cout << "faBão";
            break;
        case 'c':
        case 'C':
            cout << "Ceni";
            break;
        case 'd':
        case 'D':
            cout << "Danilo";
            break;
        case 'e':
        case 'E':
            cout << "Edcarlos";
            break;
        case 'f':
        case 'F':
            cout << "Fabão";
            break;
        case 'g':
        case 'G':
            cout << "luGano";
            break;

        default:
            cout << "Caractere inválido.";
            break;
    }
    return 0;
}