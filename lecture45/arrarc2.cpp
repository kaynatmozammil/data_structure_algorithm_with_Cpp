#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // create vector
    vector<int> arr;

    int ans = (sizeof(arr) / sizeof(int));

    cout << ans << endl;
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    // remove / delete
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> brr(10, -1);
    cout << "Size of b = " << brr.size() << endl;
    cout << "capacity of b = " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        /* code */
        cout << brr[i] << " ";
    }
    cout<<endl;
    vector<int> crr{10, 20, 30};
    for (int i = 0; i < crr.size(); i++)
    {
        /* code */
        cout << crr[i] << " ";
    }

    cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
    vector<int>drr;
    cout<<"Vector drr is empty or not "<<drr.empty()<<endl;

    return 0;
}