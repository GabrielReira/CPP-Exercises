// https://br.spoj.com/problems/DIST13/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2, result;

    cin >> x1 >> y1 >> x2 >> y2;

    result = abs(x2 - x1) + abs(y2 - y1);

    cout << result;

    return 0;
}
