#include <iostream>
using namespace std;
void printAllDigit(int number, int r)
{
    // B.C
    if (number == 0)
    {
        /* code */
        return;
    }

    r = number % 10;
    number = number / 10;

    printAllDigit(number, r);
    cout << r << " ";
}
int main()
{
    int n = 647;
    int r = n;
    printAllDigit(n, r);

    return 0;
}