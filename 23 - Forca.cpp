#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    char palavra[30], letra[1], secreta[30];
    int tam, i, chutes, acertos;
    bool correto;

    chutes = 6;
    tam = 0;
    i = 0;
    acertos = 0;
    correto = false;

    cout << "Digite a palavra secreta >>> ";
    cin >> palavra;
    system("clear"); //system("cls");

    // \0 é usado para marcar o final de uma sequência
    // Equivale a 0, caracter nulo
    while (palavra[i] != '\0')
    {
        i++;    //Percorre a palavra
        tam++;  //Obtém o tamanho
    }

    // Preencher toda a palavra secreta com _
    for (i=0; i<30; i++)
    {
        secreta[i] = '_';
    }

    // Desenvolvimento do jogo
    while ((chutes > 0) && (acertos < tam))
    {
        cout << "Chutes restantes >>> " << chutes << endl;

        // Mostra a palavra conforme a pessoa vá acertando
        cout << "Palavra = ";
        for (i=0; i<tam; i++) {
            cout << secreta[i];
        }
        // Pede a letra a pessoa
        cout << "\nDigite uma letra >>> ";
        cin >> letra[0];

        // Percorre a palavra pra ver se tem a letra infomada
        for (i=0; i<tam; i++)
        {
            if (palavra[i] == letra[0]) {
                correto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (correto == false) {
            chutes--;
        }
        //Redefinindo o chute para falso e limpando a tela
        correto = false;
        system("clear"); //system("cls");
    }
    // Fim do jogo, quando chutes = 0
    if (acertos == tam) {
        cout << "Você conseguiu!";
    } else {
        cout << "Haha. Loser.";
    }

    cin.get();
    return 0;
}