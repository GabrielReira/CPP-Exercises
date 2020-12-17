#include <iostream>
using namespace std;

int main()
{
    cout << "De 0 a 10:" << endl;
    int i = 0;
    while(i <= 10) {
        cout << i << endl;
        i++;
    }

    cout << "De 10 a 0:" << endl;
/*  int j = 10;
    while(j >= 0) {
        cout << j << endl;
        j--;
    } */ 
    int j = 11;
    do{
        //Parar quando chegar no 2
        if (j==2) {
            break;
        }
        j--;
        cout << j << endl;
    }while(j > 0);

    cout << "De 14 a 21." << endl;
    int k = 13;
    do{
        k++;
        cout << k << endl;
    }while(k>=14 && k<21);
    return 0;
}