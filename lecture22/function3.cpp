#include <iostream>
using namespace std;
int findMaxnum(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the value of a, b,c" << endl;
    cin >> a>> b>> c;
    int Max = findMaxnum(a, b, c);
    cout << "The Maximum Num is " << Max;
    
    return 0;
}