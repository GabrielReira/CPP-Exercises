#include <iostream>
#include <utility>
using namespace std;

int particiona (int v[], int inicio, int fim) {
    int pivo = v[fim];   // Pivô
    int menor = inicio;  // Índice do menor elemento

    for (int atual = inicio; atual < fim; atual++)
        if (v[atual] <= pivo) {
            swap(v[menor], v[atual]);
            menor++; 
        }

    swap(v[menor], v[fim]);
    return menor; 
}

void quicksort (int v[], int inicio, int fim)
{
    if (fim > inicio) {
        int menor = particiona (v, inicio, fim);

        // Ordenar elementos anteriores e posteriores ao pivô
        quicksort (v, inicio, menor-1);
        quicksort (v, menor+1, fim);
    }
}

int main ()
{
    size_t n;
    cin >> n;
    int vetor[n];

    // Usuário entra com os valores do vetor
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    // Colocar o vetor em ordem crescente
    int i = 0, f = n - 1;
    quicksort(vetor, i, f);

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}

