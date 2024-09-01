#include <iostream>
using namespace std;
long long int fib(long long int n)
{
    // base case
    if (n == 1)
    {
        // first term
        return 0;
    }
    if (n == 2)
    {
        // second term
        return 1;
    }

    // R.R -> f(n)=f(n-1)+f(n-2)
    long long int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{

    long long int n;
    cout << "Enter the term you want to see " << endl;
    cin >> n;

    long long int ans = fib(n);
    cout << n << "th term is: " << ans << endl;
    return 0;
}