#include <iostream>
using namespace std;
int main()
{
    int a = 5;

    int *ptr = &a;

    // copy pointer
    int *dusraptr = ptr;

    cout << *ptr << endl;
    cout << *dusraptr << endl;

    // Null Pointer
    //  int *ptr=nullptr;
    //  cout<<*ptr<<endl;

    // Bad practice
    //  int *ptr;
    //  cout<<*ptr;

    // int a = 5;
    // int *ptr = &a;
    // cout << sizeof(ptr) << endl;

    // char ch = 'C';
    // char* c = &ch;
    // cout << sizeof(c) << endl;

    // double d = 5.943;
    // double *dtr = &d;
    // cout << sizeof(dtr) << endl;

    // int a=5;

    // //pointer create
    // int *ptr=&a;

    // //Access the value ptr is pointing to
    // cout<<ptr<<endl;

    // cout<<*ptr<<endl;
    // cout<<sizeof(ptr);

    // int b=5;
    // cout<<a<<endl;

    // cout<<&a<<endl;

    //  cout<<&b<<endl;
    //
    return 0;
}