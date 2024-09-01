#include <iostream>
using namespace std;
char getGrad(int a)
{
    // if (a >= 90)
    // {
    //     return 'A';
    // }
    // else if (a >= 80)
    // {
    //     return 'B';
    // }
    // else if (a >= 70)
    // {
    //     return 'C';
    // }
    // else if (a >= 60)
    // {
    //     return 'D';
    // }
    // else
    // {
    //     return 'F';
    // }

    switch (a / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;

    default:
        return 'E';
        break;
    }
}
int main()
{
    int marks;
    cout << "Enter the value of mark ";
    cin >> marks;
    char result = getGrad(marks);
    cout << result;

    // for (int i = 0; i <= 100; i++)
    // {
    //     char ans = getGrad(i);
    //     cout << "Grade for marks = " << i << " is " << ans << endl;
    // }
    return 0;
}