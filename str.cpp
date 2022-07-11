#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[50], s2[50];

    cout << "Enter string s1: ";
    cin.getline(s1, 50); // Reading first string from user

    cout << "Enter string s2: ";
    cin.getline(s2, 50); // Reading second string from user

    strcat(s1, s2); // strcat is use to Concatenates two strings

    cout << "String obtained on concatenation is:" << s1 << endl;

    return 0;
}