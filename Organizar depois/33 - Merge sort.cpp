#include <iostream>
using namespace std;

void junta (int vetor[], int inicio, int meio, int fim)
{
    int i, j, k;

    int n1 = meio - inicio + 1, n2 = fim - meio;
    int v1[n1], v2[n2];

    // Copia os elementos do vetor principal nos sub-vetores
    for (i = 0; i < n1; i++)
        v1[i] = vetor[inicio + i];
    for (j = 0; j < n2; j++)
        v2[j] = vetor[meio + j + 1];
    
    i = 0; j = 0; k = inicio;

    // Compara os elementos dos dois sub-vetores e
    // os une em ordem crescente no vetor principal
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j]) {
            vetor[k] = v1[i];
            i++;
        }
        else {
            vetor[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetor[k] = v1[i];
        i++; k++;
    }
    while (j < n2) {
        vetor[k] = v2[j];
        j++; k++;
    }
}

void mergesort (int v[], int inicio, int fim)
{
    if (fim > inicio)
    {
        int meio = inicio + (fim - inicio) / 2;  // == (inicio + fim) / 2

        mergesort(v, inicio, meio);
        mergesort(v, meio + 1, fim);
        junta(v, inicio, meio, fim);
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
    mergesort(vetor, i, f);

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}