#include <iostream>
using namespace std;
void subsequences(string str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude
    subsequences(str, output, ++i);

    // include
    output.push_back(str[i]);
    subsequences(str, output, ++i);
};
int main()
{

    string str = "abc";
    string output = "";
    int i = 0;
    subsequences(str, output, i);
    return 0;
}