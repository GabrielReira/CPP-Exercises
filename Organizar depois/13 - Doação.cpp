#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c, val, total;
    //Variável acumuladora
    total = 0;
    string d;

    cout << "Quantos comandos você deseja fazer? ";
    cin >> c;

    for (int i=0; i<c; i++) {
        cout << "Digite 'doar' para fazer uma doação ou 'info' para saber quanto foi doado." << endl;
        cin >> d;
        if (d=="doar") {
            cout << "Qual quantia?" << endl;
            cin >> val;
            total += val;
        }else if (d=="info") {
            cout << "Já foi doado "<<total<<" reais." << endl;
        }else {cout << "Comando não válido. ";}
    }

    if (total != 0)
    cout << "Obrigado! Você doou "<<total<<" reais. Será de grande ajuda.";

    cin.get();
    return 0;
}