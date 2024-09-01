#include <iostream>
using namespace std;
void printCount(int num)
{
    // BAse case
    if (num == 0)
    {
        return;
    }

    // processing
    cout << num << " ";

    // recursion relation
    printCount(num - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    printCount(n);

    return 0;
}