#include <iostream>
using namespace std;
int main()
{

    int arr[]={2,3,4,5,90,7,88};
    int size=7;
    int start=0;
    int end=size-1;

    while (start<=end)
    {
        /* code */
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for (int  i = 0; i < size; i++)
    {
      cout<<arr[i]<<" ";
    }
    
    // for (int start = 0; start < size; start++)
    // {
    //    for (int  end = size-1; end < size; end--)
    //    {
    //     /* code */
    //    }
       
    // }
    
    // int arr[]={2,3,4,5,6,7};
    // int size=6;
    // for (int  start = 0; start < size; start++)
    // {
    //     for (int next = start+1; next < size; next++)
    //     {
    //        if(arr[start]<arr[next])
    //        {

    //         swap(arr[start],arr[next]);
    //         // int temp=arr[next];
    //         // arr[next]=arr[start];
    //         // arr[start]=temp;
    //        }
    //     }
        
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cout<<arr[i]<<" ";
    // }
    
    
    // int arr[] = {1, 2, 3, 4, 5, 6, 7,8};
    // int size = 8;
    // int start = 0;
    // int end = size - 1;

    // while (true)
    // {
    //     if (start > end)
    //         break;
    //     if (start == end)
    //     {
    //         cout << arr[start] << " ";
    //     }
    //     else
    //     {
    //         cout << arr[start] << " ";
    //         cout << arr[end] << " ";
    //     }
    //     start++;
    //     end--;
    // }

    return 0;
}