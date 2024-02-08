#include <iostream>
using namespace std;
int main()
{
    int n;
    int num_list[n];

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num_list[i];
    }
    // let input = 12,13,14
    cout << "The orignal array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num_list[i] << " ";
    }

    /* 
    output: 
    The orignal array is: 
    12 13 14
    */ 
    cout << endl;
    cout << "The reversed array is: " << endl;

    for (int j = (n - 1); j >= 0; j--)
    {
        cout << num_list[j] << " ";
    }
    /* 
    output: 
    The reveresed array is: 
    14 13 12
    */
    // 
    return 0;
}