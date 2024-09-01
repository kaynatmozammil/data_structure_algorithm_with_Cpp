#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<6;row++){
        //space
        for(int i=0;i<6-row;i++){
            cout<<"  ";
        }
        for(int j=0;j<=row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}