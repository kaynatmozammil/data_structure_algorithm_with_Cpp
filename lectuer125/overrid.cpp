#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"i am inside animal Constructor"<<endl;
    }
   virtual void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
     Dog(){
        cout<<"i am inside Dog Constructor"<<endl;
    }
    //Override
    void speak(){
        cout<<"Barking"<<endl;
    } 
};
int main()
{
    // Dog a;
    // a.speak ();

    // Animal*a=new Animal;
    // a->speak();

    // Dog*a=new Dog;
    // a->speak();

    
    //UpCastting

    // Animal*a=new Dog;
    // a->speak();

    // //DownCasting
    // Dog*b=(Dog*)new Animal; 
    // b->speak();

    // Animal*a=new Animal; 
    
    // Animal*a=new Dog;
    // Dog a;

    Dog*a=(Dog*)new Animal();
    return 0;
}