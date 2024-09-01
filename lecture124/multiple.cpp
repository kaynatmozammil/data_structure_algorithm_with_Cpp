#include <iostream>
using namespace std;

class A
{
public:
    int chemistry;
    A(){
        chemistry=101;
    }
};
class B
{
public:
    int chemistry;
    B(){
        chemistry=410;
    }
};
class C : public A, public B 
{
public:
    int maths;
};
int main()
{
    C obj;
    //Scope resolution operrator
    cout   << " " << obj.B::chemistry << " " << obj.maths;
    return 0;
}
