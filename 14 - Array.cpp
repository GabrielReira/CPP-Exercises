#include <iostream>
#include <string>
using namespace std;

int main()
{
    float val[15] = {};
    val[0] = 87.2;
    val[5] = 6.6;
    val[8] = 23.47;
    val[14] = 3.141;
//Percorrendo seus elementos em for
    for (int i=0; i<15; i++) {
        cout << val[i] << "\n";
    }

    string cars[4] = {"McLaren", "BMW", "Lamborghini", "Bugatti"};
//Substituindo um elemento do array
    cars[1] = "Ferrari";
//Percorrendo em while
    int i = 0;
    while (i<4){
        cout << cars[i] << "\n";
        i++;
    }

    cin.get();
    return 0;
}