#include <iostream>
using namespace std;
bool findkey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int findMax(int arr[][3], int row, int col)
{
    int max = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMin(int arr[][3], int row, int col)
{
    int min = INT32_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

void transpose(int arr[][3],int r,int c,int transposeArr[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int  j= 0; j < c; j++)
        {
            // swap(arr[i][j],arr[j][i]);
            transposeArr[j][i]=arr[i][j];
        }
        
    }
   
    
}
void printarray(int arr[][3],int r,int c)
{
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;

        
    }
    
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Printing Array"<<endl;
    printarray(arr,row,col);
    cout<<"Starting Transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr,row,col,transposeArr);
    cout<<"Printing array again "<<endl;
    printarray(transposeArr,row,col);
    // cout << "Max Number = " << findMax(arr, row, col) << endl;
    // cout << "Min Number = " << findMin(arr, row, col);
    // int key = 5;
    // if (findkey(arr, row, col, key))
    // {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }
}
// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         int Rsum = 0;
//          int Csum=0;
//         for (int j = 0; j < 3; j++)
//         {

//             Rsum = Rsum + arr[i][j];
//             Csum=Csum+arr[j][i];

//         }

//         cout << Rsum <<" "<<Csum<< endl;
//         // cout<<<<" ";

//     }

//     // int arr[3][3];
//     // //col wise input
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j< 3; j++)
//     //     {
//     //        cin>>arr[j][i];
//     //     }

//     // }

//     // //Output row wise
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j< 3; j++)
//     //     {
//     //        cout<<arr[i][j]<<"  ";
//     //     }
//     //     cout<<endl;
//     // }

//     // int arr[4][3];
//     // //row wise input
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j< 3; j++)
//     //     {
//     //        cin>>arr[i][j];
//     //     }

//     // }

//     // //Output row wise
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j< 3; j++)
//     //     {
//     //        cout<<arr[i][j]<<"  ";
//     //     }
//     //     cout<<endl;
//     // }

//     // //declaration 2d array
//     // int arr[3][3];
//     // //initialisation
//     // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//     // //row wise print
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cout<<brr[i][j]<<" ";
//     //     }
//     //     cout<<endl;

//     // }
//     // //colom wise print
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cout<<brr[j][i]<<" ";
//     //     }
//     //     cout<<endl;

//     // }

//     return 0;
// }