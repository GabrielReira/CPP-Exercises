// https://br.spoj.com/problems/COMETA2/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year, converted_year, last_passage, years_next;

    cin >> year;

    converted_year = year - 1986;

    last_passage = converted_year % 76;
    years_next = 76 - last_passage;

    cout << year + years_next << endl;

    return 0;
}
