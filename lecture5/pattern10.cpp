#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<6;row++){
        //space
        for(int i=0;i<row;i++){
            cout<<"  ";
        }
        //star
        for(int j=0;j<6-row;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}