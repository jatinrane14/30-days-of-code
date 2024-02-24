#include <iostream>
#include <string>
using namespace std;
// Hey there, Thanks for reveing my code today I solve this question using nammespaces,except using functions.
namespace palidrome
{
    bool is_palindrome(string s, int start, int end)
    {
        if (start >= end)
        {
            return true;
        }
        if (s[start] != s[end])
        {
            return false;
        }
        bool result = is_palindrome(s, start + 1, end - 1);
        return result;
    }
}
using namespace palidrome;
int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str;
    int n = str.length();
    if (palidrome::is_palindrome(str, 0, n - 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
