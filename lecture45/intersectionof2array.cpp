#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 6, 8};
    vector<int> brr{3, 3, 49, 60, 8};

    vector<int> ans;
    vector<int> fans;

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        int element = arr[i];

        for (int j = 0; j < brr.size(); j++)
        {
            /* code */
            if (element == brr[j])
            {
                // mark
                brr[j] = INT32_MIN;
                ans.push_back(element);
            }
            else if (element != INT8_MIN)
            {
                /* code */
                fans.push_back(brr[j]);
            }
        }
    }

    for (auto value : fans)
    {
        cout << value << " ";
    }

    // vector<int>arr{1,2,3,3,4,6,8};
    //  vector<int>brr{3,3,49,60,8};

    //  vector<int>ans;
    //  for (int i = 0; i < arr.size(); i++)
    //  {
    //     /* code */
    //     int element=arr[i];
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         /* code */
    //         if(element==brr[j])
    //         {
    //             // mark
    //             brr[j]=-1;
    //             ans.push_back(element);
    //         }
    //     }

    //  }

    // ptint array

    //  for(auto value:ans)
    //  {
    //     cout<<value<<" ";
    //  }

    //  for (int i = 0; i < ans.size(); i++)
    //  {
    //     /* code */
    //     cout<<ans[i]<<"  ";
    //  }

    //  int arr[] = {1, 3, 5, 7, 8};
    // int sizea = 5;
    // int brr[] = {3, 4, 5, 8};
    // int sizeb = 4;
    // vector<int> ans;

    // for (int i = 0; i < sizea; i++)
    // {
    //     for (int j = 0; j < sizeb; j++)
    //     {
    //          if(arr[i]==brr[j])
    //          {
    //             cout<<arr[i]<<" ";
    //          }
    //     }
    // }

    return 0;
}