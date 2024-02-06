#include <iostream>
using namespace std;
int main(){
    int n;
    int num_list[n];    // let n = 5
    cout<<"Enter number of terms: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "Enter number" <<i+1<<": ";
        cin >> num_list[i];  // user input the vlaues eg: 11, 45, 89, 45, 20
    }
    for (int i=0; i<n; i++)
    {
        cout << num_list[i]<< " ";
    }
    // output : 11 45 89 45 20
    return 0;
}
