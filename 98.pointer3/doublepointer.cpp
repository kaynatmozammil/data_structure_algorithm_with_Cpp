#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **p=&p;

    // **p=*p+1;  this is wrong
     

    return 0;
}

// #include<iostream>
// using namespace std;
// void solve(int **ptr)
// {
//     **ptr=**ptr+1;
// }
// int main()
// {
//     int x=12;
//     int *p=&x;
//     int **q=&p;
//     solve(q);
//     cout<<x<<endl;
//     return 0;
// }