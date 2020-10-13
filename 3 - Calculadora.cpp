#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int num1, num2;
    char op;
    
    cout << "Qual operacao voce gostaria de realizar? Digite...:\n+ para adicao \n- para subtracao\n* para multiplicacao \n/ para divisao" << endl;
    cin >> op;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    if (op == '+') {
        cout << "Soma = " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << "Subtracao = " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << "Multiplicacao = " << num1 * num2 << endl;
    }
    else if (op == '/'){
        cout << "Divisao = " << num1 / num2 << endl;
    }

    else {
        cout << "Operador nao valido.";
    }

    system("pause");
    return 0;
}