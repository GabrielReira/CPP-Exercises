#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    short int b = 0;
    long int c = 0;
    
    signed int d = 0;
    unsigned int e = 0;
    
    cout << "Valor de d: " << endl;
    cin >> d;
    cout << "Valor de e: " << endl;
    cin >> e;
    
    cout << d << endl << e << endl;
   
    cout << "Valores em bytes:" <<endl;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    return 0;
}