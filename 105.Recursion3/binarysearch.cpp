#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> v, int size, int start, int end, int key)
{
    // Base Case
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (v[mid] == key)
    {
        return mid;

        // return (v[mid] < key) ? binarySearch(v, size, start, end, key) : binarySearch(v, size, start, end, key);
    }
    else if (v[mid] < key)
    {
        start = mid + 1;
        return binarySearch(v, size, start, end, key);
    }
    else
    {
        end = end - 1;
        return binarySearch(v, size, start, end, key);
    }
}
int main()
{
    vector<int> v{10, 20, 30, 40, 60, 70, 90, 99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n - 1;

    int ans = binarySearch(v, n, s, e, target);
    cout << "Answer is = " << ans << endl;
    return 0;
}