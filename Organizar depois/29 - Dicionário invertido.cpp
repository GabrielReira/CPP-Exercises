#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;
    string vetor[n];

    for (size_t i = 0; i < n; i++)
        cin >> vetor[i];

    // Ordenando por inserção
    for (size_t i = 1; i < n; i++)
        for (int j = i; (j > 0) && (vetor[j] > vetor[j-1]); j--)
            swap(vetor[j], vetor[j - 1]);

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}