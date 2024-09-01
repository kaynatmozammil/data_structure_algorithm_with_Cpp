#include <iostream>
using namespace std;
void util(int *p)
{
    //cpoy creat hua h
    //p = p + 1;
    *p = *p + 1;
}
int main()
{

    int a = 5;
    int *p = &a;  
    cout << "Before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    util(p);

    cout << "After" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    //     int a = 5;
    //     int *p = &a;
    //     int **q = &p;
    //     cout << &a << endl;
    //     cout << p << endl;
    //     cout << &p << endl;
    //    // cout <<  << endl;
    //     cout<<q<<endl;
    //     cout << *q << endl;
    //     cout << **q << endl;

    return 0;
}