#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++)
    {
       if( arr[i]==key)
       {
        return true;
       }
      
    }
     return false;
}
int main()
{
    //Extrme
    
    // int arr[]={2,3,4,2,89,5,56,63,98,8};
    // int size=10;
    // // int max=INT32_MIN;
    // int min=INT32_MAX;
    // for(int i=0;i<size;i++)
    // {
    //     if(arr[i]<min)
    //     {
    //         min=arr[i];
    //     }
    // }
    // cout<<min;

    // int arr[]={0,1,1,1,1,1,0,0,1,0,1,0,1,0,3,4,5,0};
    // int size=18;
    // int numZero=0;
    // int numOne=0;

    // for(int i=0;i<size;i++)
    // {
    //     //if zero found increment numZero
    //     if(arr[i]==0)
    //     {
    //         numZero++;
    //     }
    //      //if one found increment numOne
    //     else if(arr[i]==1)
    //     {
    //         numOne++;
    //     }
    // }
    // cout<<"Number of Zeroes "<<numZero<<endl;
    // cout<<"Number of ones "<<numOne<<endl;

    // int arr[]={1,2,3,4,5,6,7,8};
    // int size=8;
    // bool flag=0;
    // //0-> Not Found
    // //1-> Found
    // int key=10;
    // for(int i=0;i<size;i++)
    // {
    //     if(arr[i]==key)
    //     {
    //         // cout<<"Found";
    //         flag=1;
    //         break;
    //     }
    // }
    // if(flag)
    // cout<<"Present"<<endl;
    // else
    // cout<<"Absent";
    //  cout<<"Not Found";
    // int arr[5]={1,3,5,7,8};
    // int size=5;

    // cout<<"Enter  the key to find"<<endl;
    // int key;

    // cin>>key;
    // if(find(arr,size,key))
    // {
    //     cout<<"Found"<<endl;

    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    return 0;
}