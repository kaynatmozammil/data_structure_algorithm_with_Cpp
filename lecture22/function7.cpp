#include<iostream>
using namespace std;
int getEvensum(int a)
{
    int sum=0;
    for(int i=2;i<=a;i+=2){
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    int ans= getEvensum(n);
    cout<<"Even Sum upto "<< n <<" is "<<ans<<endl;
    return 0;
}