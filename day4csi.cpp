#include<iostream>
using namespace std;

int factorial(int a); // function protocole
int main()
{
      int x=5; // assign value 5 to variable x
      cout << "factorial of " << x<< " is: "<< factorial(x)<< endl; // function call
}
// function defination
int factorial(int a) {
      int fac;
      if(a==0||a==1){
             return 1;
      }
      else{
         fac = a*factorial(a-1);
         return fac;
      }
}