#include <iostream>
using namespace std;
int factorial(int num)
{
    cout << "Function called for n: " << num << endl;
    if (num == 1)
        return 1;
    int chhotiProblemAns = factorial(num - 1);
    int badiProblemAns = num * chhotiProblemAns;
    return badiProblemAns;
}
int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int ans = factorial(n);
    cout << "Answer is = " << ans << endl;
    return 0;
}