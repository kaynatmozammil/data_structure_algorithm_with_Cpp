#include <iostream>
using namespace std;

class Animal
{
    // state or properties OR data members
private:
    int weight;

public:
    int age;
    string name;

    // default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "Constructor called" << endl;
    }

    // Paramiterised constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Paramiterised constructor called " << endl;
    }

    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Paramiterised constructor 2 called " << endl;
    }

    Animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "Paramiterised constructor 3 called " << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "I am inside copy constructor" << endl;
    }
    // behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Sleeping" << endl;
    }
    int getWeight()
    {
        return weight;
    }
    void setWeightint(int weight)
    {
        this->weight = weight;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name << endl;
    }

    ~Animal()
    {
        cout << "I am inside Destructor" << endl;
    }
};
int main()
{
    // Object creation

    // static
    // Animal ramesh;
    // ramesh.age=12;
    // ramesh.name="lion";
    // cout << "Age of ramesh is: " << ramesh.age << endl;
    // cout << "Name of ramesh is: " << ramesh.name << endl;

    // ramesh.eat();

    // ramesh.sleep();

    // //to private member
    // ramesh.setWeightint(101);
    // cout<<"Weight "<<ramesh.getWeight()<<endl;

    // Dynamic Memory
    // Animal *suresh = new Animal;

    // (*suresh).age = 15;
    // (*suresh).name = "billi";

    // // alternate dynamic
    // suresh->age = 17;
    // suresh->name = "baby";

    // suresh->eat();
    // suresh->sleep();

    // Animal a(10);
    // Animal *b = new Animal(100, 104, "xyz");

    // // object copy
    // Animal c = a;

    // Animal animal1(c);

    // Animal a;
    // a.age = 20;
    // a.setWeightint(101);
    // a.name = "kaynat";

    // Animal b = a;
    // cout << "a ->";
    // a.print();
    // cout << "b -> ";
    // b.print();

    // // a.print();
    // // b.print();

    // a.name[0] = 'J';

    // a.print();

    // cout<<"b->";
    // b.print();

    cout << "a obj creation" << endl;
    Animal a;
    a.age = 5;

    cout << "b obj creation" << endl;
    Animal *b = new Animal();
    b->age = 12;

    // Manually Destructr
    delete b;

    return 0;
}