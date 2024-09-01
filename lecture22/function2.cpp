#include <iostream>
using namespace std;

// function declare + define
void sum(int num1, int num2);
int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
    return 0;
}
void sum(int num1, int num2)
{
    int sum = num1 + num2;
    cout << sum << endl;
}
