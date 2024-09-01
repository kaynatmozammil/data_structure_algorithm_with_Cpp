#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<" ";
        }
        int strat=row+1;
        for(int col=0;col<=row;col++)
        {
            cout<<strat;
           strat++;
        }

        
         strat=2*row;
        for(int col=0;col<row;col++)
        {

            cout<<strat;
            strat--;
        }
        cout<<endl;
    }
    return 0;
}