#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int cont = 0;
    int cont2 = 0;
    string palavra;

    cout << "Quantas palavras você deseja informar? " << endl;
    cin >> cont2;


    while (cont2 != 0)
    {
        cout << "Digite as palavras: \n";
        cin >> palavra;

        for (int i=0; i < palavra.length(); i++) {
            if (palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u')
            cont++;
        } cont2--;
        cout << cont << " vogais." << endl;
        cont = 0;
    } 

    return 0;
}