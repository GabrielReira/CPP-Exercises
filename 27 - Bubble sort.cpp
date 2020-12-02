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
    for (int penultimo = n-2; penultimo >= 0; penultimo--)
    {
        for (size_t i = 0; i <= penultimo; i++)
        {
            if (vetor[i] > vetor [i + 1])
                swap(vetor[i], vetor[i + 1]);
        }
        // Ao final de cada for, o maior elemento estará
        // na última posição
    }
    

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}