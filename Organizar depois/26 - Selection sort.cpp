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
    for (int ultimo = n-1; ultimo >= 1; ultimo--)
    {
        size_t indiceDoMaior = 0;
        // Descobrir o índice do maior valor
        for (size_t i = 1; i <= ultimo; i++)
        {
            if (vetor[i] > vetor[indiceDoMaior])
                indiceDoMaior = i;
        }
        // Colocar o maior elemento na última posição
        swap(vetor[indiceDoMaior], vetor[ultimo]);
    }

    // Exibir o vetor ordenado
    for (size_t i = 0; i < n; i++)
        cout << vetor[i] << " ";


    return 0;
}