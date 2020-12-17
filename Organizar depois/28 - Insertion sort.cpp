#include <iostream>
#include <utility>
using namespace std;

int main ()
{
    // Tamanho do vetor
    size_t n;
    cin >> n;
    int vetor[n];

    // Preencher os valores do vetor
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    // Colocar o vetor em ordem crescente
    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (vetor[j] < vetor[j-1]); j--)
            swap(vetor[j], vetor[j - 1]);

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}