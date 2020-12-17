#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Digite 1, 2 ou 3 >>> ";
    int num = 0;
    cin >> num;

    if (num==1) {
        for (int i=0; i<5; i++){
            cout << i << " ";
        }
    }else{
        if (num==2) {
            int i2 = 0;
            while (i2<5) {
                i2++;
                cout << i2 << " ";
            }
        }else{
            if (num==3) {
                int i3 = 0;
                do{
                    i3++;
                    cout << i3 << " ";
                }while(i3<5);
            }
        }
    }

    system("pause");
    return 0;
}