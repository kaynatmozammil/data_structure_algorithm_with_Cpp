#include <iostream>
using namespace std;
void printArray(int array[], int n, int i)
{
    // Base case

    if (i >= n)
    {
        return;
    }
    // 1 case solve karde
    cout << array[i] << " ";
    // baki recursion sambhal lega
    printArray(array, n, i + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    printArray(arr, n, i);

    return 0;
}