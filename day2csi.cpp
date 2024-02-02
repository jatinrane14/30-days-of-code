#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int age;
    cout << "Enter your Name: "<<endl;
    cin >> name;
    cout << "Enter your age: "<<endl;
    cin >> age;
    cout << "Hello," << " "<< name << "! Your are" <<" "<<age<<" "<<"years old and"<<" ";
    if (age>=18 && age<=60)
    {
        cout << "You're elligible to drive car" << endl;
    }
    else
    {
        cout << "You're not elligible to drive car"<< endl;
    }
    
    return 0;
}