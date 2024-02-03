#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter any natural number: ";
    cin >> a;
    if(a%2==0){
        cout<< "The number enered by user is even number"<<endl;
    }
    else{
        cout <<  "The number enered by user is odd number"<<endl;
    }
}
