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
    for (size_t i = 0; i < n; i++)
    {
        cin >> vetor[i];
        // Os valores já são inseridos em ordem crescente
        if (i > 0)
        {
            for (int j = i; (j > 0) && (vetor[j] < vetor[j-1]); j--)
                swap(vetor[j], vetor[j - 1]);
        }
    }

    // Valor para ser buscado no vetor
    int valor;
    cin >> valor;

    int esquerda = 0, direita = n - 1, meio;
    int iteracoes = 1;

    // Começa o algorítimo da busca binária
    while (esquerda <= direita)
    {
        meio = (esquerda + direita) / 2;

        if (valor == vetor[meio])  // Se o valor for encontrado
        {
            cout << "Valor encontrado!" << endl;
            break;
        }
        
        // Se o valor não for encontrado será descartado ou a parte
        // direita ou a parte esquerda do vetor
        (valor < vetor[meio]) ? (direita = meio-1) : (esquerda = meio+1);
        
        iteracoes++;  // Incrementar o contador
    }

    if (vetor[meio] != valor)
        cout << "Valor não encontrado." << endl;
    
    cout << "Foram realizadas " << iteracoes << " iterações." << endl; 


    return 0;
}