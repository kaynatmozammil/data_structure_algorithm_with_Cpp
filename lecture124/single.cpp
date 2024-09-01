#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int weight;
    int age;

    void speedup(){
        cout<<"Speeding up"<<endl;

    }
    void breakMarro(){
        cout<<"break maar dee"<<endl;
    }
};
class scorpio:public car{

};
int main()
{
    scorpio kaynatwali;
    kaynatwali.speedup();
    kaynatwali.breakMarro();
    return 0;
}