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
            int ans=col+1;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        // col=col-1;

        for(col=row;col>=1;col--)
        {
            int ans=col;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}