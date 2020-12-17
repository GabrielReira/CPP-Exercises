#include <iostream>
using namespace std;

int main ()
{
    //Cada espaço da planilha terá um valor
    //A última coluna será a soma
    float plan[5][6] = {};

    //Criando a planilha com seus valores
    for (int x=0; x<5; x++)
    {
        //O y<5 porque a coluna de índice 5 será o total
        for (int y=0; y<5; y++) {
            plan[x][y] = 33 + 7*(y+4) - 2*(x*x);
        }
    }

    //Calculando a soma (coluna 6 = índice 5)
    int total = 0;
    for (int x=0; x<5; x++)
    {
        for (int y=0; y<5; y++) {
            plan[x][5] += plan[x][y];
        }
        total += plan[x][5];
    }

    //Imprimir a planilha na tela
    for (int x=0; x<5; x++)
    {
        for (int y=0; y<6; y++) {
            string quebra = (y<5) ? " | " : "\n";
            cout << plan [x][y] << quebra;
        }
    }

    cout << "O valor total foi " << total << ".";


    return 0;
}