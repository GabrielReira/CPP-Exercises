#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int a = 77;
    int *ptr = &a;
    *ptr = 69;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    string comi = "fígado";
    string* pf = &comi;
    cout << *pf;

    return 0;
}