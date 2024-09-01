#include <iostream>
using namespace std;
void max(int array[], int n, int i, int &mini)
{

    // Bc
    if (i >= n)
    {
        return;
    }

    if (array[i] < mini)
    {
        mini = array[i];
    }

    max(array, n, ++i, mini);

    // return maxi;
}
int main()
{
    int arr[] = {10, 30, 15, 21, 44, 26, 17};
    int n = 7;
    int i = 0;
    int mini = INT32_MAX;
    max(arr, n, i, mini);
    cout << "Maximum Number is = " << mini << endl;
    return 0;
}