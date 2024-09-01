#include <iostream>
using namespace std;

class Animal
{
// public:
private:
    int age;
    int weight;
};

// Child class
class Dog : private  Animal
{
public:
    void print()
    {
        cout << this->age;
    }
};
int main()
{
    Dog d1; 
    //d1.print();
    //cout<<d1.age;
    return 0;
}