#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int star[n];

    for (int i = 0; i < n; i++) {
        cin >> star[i];
    }


    int stars_attacked = n;
    for (int i = 0; i < n; i++) {
        if (star[i] % 2 == 0) {
            stars_attacked = i + 1;
        }
    }


    int k = 0;
    while (k < n) {
        if (star[k] == 0) {
            break;
        }
        else if (star[k] % 2 != 0) {
            star[k] -= 1;
        }
        else {
            star[k] -= 1;
            k -=2;
            if (k < 0) {
                break;
            }
        }
        k++;
    }


    int sum_sheeps = 0;
    for (int i = 0; i < n; i++) {
        sum_sheeps += star[i];
    }


    cout << stars_attacked << " " << sum_sheeps << endl;

    return 0;
}
