#include <iostream>
using namespace std;

int main()
{
    for (int i=0; i<=10; i++) {
        cout << i << "\n";
    }
    
    cout << endl << "Números pares de 14 a 28:" << endl;
    for (int i=14; i<=28; i += 2) {
        //Exceto o 24
        if (i==24) {
            continue;
        }
        cout << i << endl;
    }

    cout << endl << "Digite um número para saber sua tabuada: " << endl;
    int n=0; cin >> n;
    for (int i=1; i<10; i++) {
        cout << i << " x " << n << " = " << i*n << endl;
    }

    return 0;
}