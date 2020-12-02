#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main ()
{
    size_t n;
    cin >> n;

    string nome[n];
    double nota[n];

    for (size_t i = 0; i < n; i++)
        cin >> nome[i] >> nota[i];

    // Ordenando por inserção
    for (size_t i = 1; i < n; i++)
        for (
            int j = i;
            (j > 0) &&
            ((nota[j] > nota[j-1]) ||
                (nota[j] == nota[j - 1] &&
                nome[j] < nome[j - 1])
            );
        j--)
        {
            swap(nota[j], nota[j - 1]);
            swap(nome[j], nome[j - 1]);
        }

    // Exibir o vetor ordenado
    for (int i = 0; i < n; i++)
        cout << nome[i] << " " << nota[i] << endl;


    return 0;
}