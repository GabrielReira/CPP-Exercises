#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i=0, i2=0;

    cout << "Digite abaixo dois números: " << endl;
    cin >> i;
    cin >> i2;
    cout << "Computador, esses números são iguais?" << endl;
        
    if (i == i2) cout << "SIM!" << endl;
    if (i != i2 ) cout << "NÃO." << endl;
    cout << endl;

    int hora = 0;
    cout << "Digite o horário: ";
    cin >> hora;
/*     if(hora >= 18) {
        cout << "Boa noite." << endl;
    } else {
        cout << "Bom dia." << endl;
    }
 */
    string resultado = (hora >= 18) ? "Boa noite." : "Bom dia.";
    cout << resultado;

    return 0;
}