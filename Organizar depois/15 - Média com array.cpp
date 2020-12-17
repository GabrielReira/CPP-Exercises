#include <iostream>
using namespace std;

int main ()
{
    float val[5];
    float total = 0;

    //Pedindo a entrada dos números
    cout << "==== MÉDIA DE 5 NÚMEROS ====" << endl;
    for (int i = 0; i<5; i++) {
        cout << "Informe o "<< i+1 <<"º valor. \n";
    //À cada valor informado o i vai aumetando até chegar ao val[4]
        cin >> val[i];
        total += val[i];
    }
    //Dando o resultado
    cout << "A média é >>> " << (total/5) << endl;

    cin.get();
    return 0;
}