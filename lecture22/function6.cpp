#include<iostream>
using namespace std;
int getSum(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
         sum= sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans=getSum(n);
    cout<<"Sm up uppo "<<n <<"is  "<<ans<<endl;


    return 0;
}