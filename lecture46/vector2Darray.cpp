#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<vector<int>> arr;

    // vector<int> a{1, 2, 3};
    // vector<int> b{2, 4, 6, 2, 9};
    // vector<int> c{1, 3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int row=3;
    // int col=5;
    // vector<vector<int>>arr(row,vector<int>(col ,1));
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>>arr(5,vector<int>(5,-8));
    cin>>arr[2][3];
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j< arr.size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<arr[2][3];
    

    return 0;
}