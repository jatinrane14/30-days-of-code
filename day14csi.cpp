#include <iostream>
using namespace std;
int main(){
    int size, target, count = 0;
    
    cout<<"Enter the size of the array: ";
    cin>>size;
    
    int array[size];
    
    for (int i = 0; i < size; ++i) {
        cout<<"Enter the element "<< i+1<<" ";
        cin >>array[i];
    }
    
    cout<<"Enter the target element: ";
    cin>>target;
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            count++;
        }
    }
    cout<<"The number of occurrences of the target element is: "<< count;
    
    return 0;

}