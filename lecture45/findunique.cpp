#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>crr)
{
    int ans=0;
    for(int i=0;i<crr.size();i++)
    {
        ans=ans^crr[i];
        
    }
    return ans;
}
int main()
{
    //Unique elemnent
   
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
     vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    int uniqueelment=findUnique(arr);
    cout<<"Unique Element is "<<uniqueelment<<endl;

    return 0;
}