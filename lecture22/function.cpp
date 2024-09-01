#include <iostream>
using namespace std;

void printname()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "Kaynat" << endl;
  }
}

void printnumber(int num){
  cout<<num<<endl;
}
int main()
{

  int a=5;
  printnumber(a);

  // Function call
  printname();

  //   cout<<"Enter the value of n "<<endl;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //     cout<<"Kaynat"<<endl;
  // }

  //   cout<<"Enter the value of n "<<endl;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //     cout<<"Kaynat"<<endl;
  // }

  //   cout<<"Enter the value of n "<<endl;
  // cin>>n;
  // for(int i=0;i<n;i++){
  //     cout<<"Kaynat"<<endl;

  return 0;
}
