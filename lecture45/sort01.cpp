#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 0, 0, 1, 0, 0, 1, 0};
    int start = 0;
    int end = arr.size() - 1;

    int i = 0;
    while (i != end)
    {
        if (arr[i] == 0)
        {
            // swap from left
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else
        {
            // swap from left
            swap(arr[i], arr[end]);
            end--;
        }
    }

    // print
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     /* code */
    //     cout<<arr[i]<<" ";
    // }

    for (auto kaynat : arr)
    {
        /* code */
        cout << kaynat << " ";
    }

    return 0;
}