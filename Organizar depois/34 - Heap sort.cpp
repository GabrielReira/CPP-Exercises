#include <iostream>
#include <utility>
using namespace std;

void constroiHeap(int v[], int n, int i)
{
	int maior = i;  // Índice do pai
	int filho1 = 2 * i + 1, filho2 = 2 * i + 2;

	// Verificar se algum dos filhos são maiores que seu pai
	if (filho1 < n && v[filho1] > v[maior])
		maior = filho1;
	if (filho2 < n && v[filho2] > v[maior])
		maior = filho2;

	// Caso o pai não seja o maior elemento
	if (maior != i) {
		swap(v[i], v[maior]);
		constroiHeap(v, n, maior);
	}
}

void heapsort(int v[], int n)
{
	// O loop começa pelo último pai do heap
	for (int i = n / 2 - 1; i >= 0; i--)
		constroiHeap(v, n, i);

	for (int i = n - 1; i > 0; i--) {
		// Move o pai (maior elemento) para o fim do vetor
		swap(v[0], v[i]);
		// Construir max-heap, agora com -1 elemento
		constroiHeap(v, i, 0);
	}
}

int main()
{
    size_t n;
    cin >> n;
    int vetor[n];

    // Usuário entra com os valores do vetor
    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    // Colocar o vetor em ordem crescente
    heapsort(vetor, n);

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << vetor[i] << " ";


	return 0;
}