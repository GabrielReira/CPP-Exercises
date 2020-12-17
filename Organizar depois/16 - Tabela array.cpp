#include <iostream>
using namespace std;

int main ()
{
    //int matriz[2][3] = {7,11,14,21,25,29};
    int matriz[2][3] = {{7, 11, 14}, {21, 25, 29}};
    cout << matriz[0][2] << endl;//Primeira linha, coluna 3
    cout << matriz[1][0] << endl;//Segunda linha, coluna 1

    //Laços aninhados
    //Mostrar todos os valores da matriz
    for (int i=0; i<2; i++) 
    //1) Primeiro ele manda executar a primeira linha
    //3) Segunda execução ele manda ir pra segunda linha
    {
        for (int j=0; j<3; j++) { 
    //2) Lê os valores de todas as colunas da primeira linha
    //4) Lê os valores de todas as colunas da segunda linha
            cout <<"[" << i << "][" << j << "]: ";
            cout << matriz[i][j] << endl;
        }
    }

    //Adicionando 7 a todos os valores da matriz
    for (int x=0; x<2; x++)
    {
        for (int y=0; y<3; y++) {
            matriz[x][y] = 7;
            cout << matriz[x][y] << endl;
        }
    }

    //Matriz 6x6 a partir da função (7 * (x - 8)) - ((y*y) - 3)
    int matrix [6][6] = {};
    for (int a=0; a<6; a++)
    {
        for (int b=0; b<6; b++) {
            matrix[a][b] = (7 * (a + 8)) - ((b*b) + 3);
            //Fazer quebra de linha pra ficar organizada a matriz no cout
            string quebra = (b<5) ? " - " : "\n";
            cout << matrix[a][b] << quebra;
        }
    }


    return 0;
}