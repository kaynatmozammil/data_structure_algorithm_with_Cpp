#include <iostream>
#include <vector>
using namespace std;
bool checkSorted(vector<int> &v, int &s, int i)
{
    if (i == s - 1)
    {
        return true;
    }

    if (v[i + 1] < v[i])
    {
        return false;
    }

    checkSorted(v, s, ++i);
}
int main()
{
    vector<int> array{10, 20, 30, 60, 50};
    int n = array.size();
    int i = 0;
    bool isSorted = checkSorted(array, n, i);

    if (isSorted)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}