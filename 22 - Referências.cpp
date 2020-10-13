#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int w = 9;
    cout << w << endl;
    int &z = w;
    z = 8; //Mudando o valor de w através de z
    cout << w << endl;

    string food = "Lasanha";
    cout << food << endl;
    string &meal = food;
    meal = "Escondidinho";
    cout << food << endl;
    cout << meal << endl;

    //Memory adress
    cout << &w << endl;
    cout << &food << endl;
    cout << &meal << endl;

    cin.get();
    return 0;
}