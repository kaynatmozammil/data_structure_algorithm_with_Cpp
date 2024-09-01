#include<iostream>
using namespace std;

//n is parameter
void printcounting(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<" ";
    }
    cout<<endl; 
}
int main()
{

    int n;
    cout<<"Enter the value of N to Find Count"<<endl;
    cin>>n;

    //n is argument
    printcounting(n);
    return 0;
}