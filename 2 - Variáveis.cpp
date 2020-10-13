#include <iostream>
using namespace std;

int main() {
    int age = 18;
    cout << "Eu tenho " << age << " anos." << endl;
    int x=5, y=14, z=21;
    cout << 2*(y-2*x)+z << endl;

    char letter = 'G';
    double num = 14.01;

    cout << "O valor da primeira variavel eh: " << age;
    cout << "\nO valor da outra variavel eh: " << letter;
    cout << "\nO valor da ultima variavel eh: " << num;
    cout << endl;
    cout << age << " ocupa " << sizeof(age) << " bytes." << endl;
    cout << letter <<" ocupa " << sizeof(letter) << " bytes." <<endl;
    cout << num << " ocupa " << sizeof(num) << " bytes.";

    return 0;
}