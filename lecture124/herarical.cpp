#include <iostream>
using namespace std;

class Car
{
public:
    int age;
    int weight;

    void speedup()
    {
        cout << "Speeding Up" << endl;
    }
};
class Scorpio : public Car
{
};
class Fortuner : public Car
{
};
int main()
{
    Scorpio s11;
    s11.speedup();

    Fortuner f11;
    f11.speedup();
    return 0;
}