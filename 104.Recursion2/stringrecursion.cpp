#include <iostream>
#include <vector>
using namespace std;
// bool checkKey(string &xyz, int &n, char &c, int &i)
// {
//     // B.C
//     if (i >= n)
//     {
//         return false;
//     }
//     // 1 case solve karo
//     if (xyz[i] == c)
//     {
//         return true;
//         // break;
//     }
//     // baki recursion sambhal lega
//     return checkKey(xyz, n, c, ++i);
// }
// void checkKey(string &xyz, int &n, char &c, int &i, vector<int> &ans)
void checkKey(string &xyz, int &n, char &c, int &i, int &count)
{
    // B.C
    if (i >= n)
    {
        return;
        // return -1;
    }
    // 1 case solve karo
    if (xyz[i] == c)
    {
        // ans.push_back(i);
        //  cout << "Found at " << i << endl;
        //  return i;
        count++;
    }
    // baki recursion sambhal lega
    // return checkKey(xyz, n, c, ++i, count);
    checkKey(xyz, n, c, ++i, count);
}
int main()
{
    string str = "Kaynat Mozammil";
    int n = str.length();
    char key = ' ';
    int i = 0;
    int count = 0;
    // vector<int> ans;
    // int ans = checkKey(str, n, key, i);
    // checkKey(str, n, key, i, ans);
    checkKey(str, n, key, i, count);
    //  cout << "Answer is = " << ans << endl;

    cout << count << endl;

    // cout << "printing Answer: " << endl;
    // for (auto val : ans)
    // {
    //     /* code */
    //     cout << val << " ";
    // }

    return 0;
}