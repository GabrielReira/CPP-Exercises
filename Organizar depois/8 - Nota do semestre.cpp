#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    float n1, n2, n3, n4;
    cout << "Digite sua primeira nota do semestre >>> ";
    cin >> n1;
    cout << "Digite sua segunda nota do semestre >>> ";
    cin >> n2;
    cout << "Digite sua terceira nota do semestre >>> ";
    cin >> n3;
    cout << "Digite sua quarta nota do semestre >>> ";
    cin >> n4;
    float media = (n1+n2+n3+n4)/4;
    cout << "Você ficou com "<<media<< " na média final." << endl << endl;

    if(media >= 7){
        cout << "Boa!";
        if(media == 7) 
        cout << ", mas por pouco não foi de base.";
    } else{
        cout << "Tá moscando, hein amigão?";
    }

    system("pause");
    return 0;
}