#include <iostream>
#include <utility>
using namespace std;

int particiona (int v[], int inicio, int fim) {
    int pivo = v[fim];
    int esq = inicio;
    for (int dir = inicio; dir < fim; dir++)
        if (v[dir] <= pivo) {
            swap(v[esq], v[dir]);
            esq++; 
        } 
    swap(v[esq], v[fim]);

   return esq; 
}

void quicksort (int v[], int inicio, int fim)
{
    if (fim > inicio) {
        int esq = particiona (v, inicio, fim);

        quicksort (v, inicio, esq-1);
        quicksort (v, esq+1, fim);
    }
}

int main()
{
    int vetor[10] = {54, 78, 10, 14, 99, 7, 29, 88, 2, 100};
    int vetor2[9] = {7, -2, 4, 1, 6, 5, 0, -4, 2};
    int i = 0, f;

    // particiona(vetor2, i, f = 8);
    // for (int i = 0; i < 9; i++)
    //     cout << vetor2[i] << " ";

    // quicksort(vetor, i, f = 9);
    particiona(vetor, i, f = 9);

    for (int i = 0; i < 10; i++)
        cout << vetor[i] << " ";

    return 0;
}