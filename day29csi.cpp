#include <iostream>
#include <cstring>
#define MAX 50
using namespace std;
bool isValidParentheses(char* s);

int main() {
    char parentheses[MAX];
    cout<<"Enter a string of parentheses: ";
    cin>>parentheses;
    if (isValidParentheses(parentheses)) {
        cout<<"The string of parentheses is valid!\n";
    } else {
        cout<<"The string of parentheses is not valid.\n";
    }
    return 0;
}
bool isValidParentheses(char* s) {
    int len = strlen(s);
    int stack[len];
    int top = -1;
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = '(';
        } else if (s[i] == ')') {
            if (top == -1 || stack[top] != '(') {
                return false;
            }
            top--;
        }
    }

    return top == -1;
}