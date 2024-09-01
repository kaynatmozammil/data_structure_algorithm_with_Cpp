#include <iostream>
using namespace std;
class Maths
{
public:
    int sum(int a, int b)
    {
        cout << "I am first Signature" << endl;
        return a + b;
    }
    int sun(int a, int b, int c)
    {
        cout << "I am second Signature" << endl;
        return a + b + c;
    }
    int sum(int a, float b)
    {
        cout << "I am third Signature" << endl;
        return a + b + 100;
    }

    // double sum(int a, int b)
    // {
    //     return 500;
    // }
};
int main()
{
    Maths obj;
    cout << obj.sum(2, 5.12f);
    return 0;
}