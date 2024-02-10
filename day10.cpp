#include <iostream>
using namespace std;

void swap(int &a, int &b);
void Sort(int arr[], int n);
void print_Array(int arr[], int n);

int main()
{
    //This source code is written by jatin rane , ist year CS student 
    int n,arr[n];
    cout << "Enter number of elements in array: ";
    cin>>n; 
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter number: "<<i+1;
        cin >> arr[i];
    }
    //cout << sizeof(arr);
    cout << "Original array: " << endl;
    print_Array(arr, n);
    // sort the array using bubble sort Algorithem
    Sort(arr, n);

    // print the array After sorted 
    cout << "Sorted array: " << endl;
    print_Array(arr, n);

    return 0;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            // swap the elements if Jth index element is > Jth + 1 Element 
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
void print_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}