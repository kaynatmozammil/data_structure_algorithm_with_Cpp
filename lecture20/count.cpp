#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        int col;
        for( col=0;col<=row;col++)
        {
            cout<<col+1;
        }
        // col=col-1;

        for(col=row;col>=1;col--)
        {
            cout<<col;
        }
        cout<<endl;
    }
    
    return 0;
}