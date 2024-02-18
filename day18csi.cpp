#include <iostream>
using namespace std;
bool isVowel(char c);
bool isConsonant(char c);
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int vowels = 0, consonants = 0;
    for (char c : s){
        if (isVowel(c)){
            ++vowels;
        }
        else if (isConsonant(c)){
            ++consonants;
        }
    }
    cout << "The number of vowels in a given string is " << vowels << endl;
    cout << "The number of consonants in a given string is " << consonants << endl;
    return 0;
}
bool isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isConsonant(char c){
    c = tolower(c);
    return (c >= 'a' && c <= 'z' && !isVowel(c));
}