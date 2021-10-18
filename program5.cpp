#include <iostream>
#include <stdio.h>
#include<algorithm>
#include <cstring>



using namespace std;
void copyStr(string &string1,string string2)
{
    for(int i=0;string2[i]!='\0';i++){
        string1 += string2[i];
    }
}
int main()
{
    cout << " Program to find the length, concatenation, reverse, copy of the String  \n\n";

// for length in string .
    string s1, s2, s3 ;
    char c='a';
    int n = 0, i = 0;

    cout << "\nEnter the String  to find the length for : ";
    cin >> s1;

    
    while (c != '\0')
    {
        c = s1[i];
        i++;
    }

    n = i - 1;

    cout << "\nLength of the entered string \"" << s1 << "\" is : " << n << "\n";

// for concatenation in string .

    cout << "\nEnter the first String  : ";
    cin >> s1;

    cout << "\nEnter the second String  : ";
    cin >> s2;

    cout << "\nThe two  Strings before Concatenation are :\n";
    cout << "String1 = " << s1 << " and its lenght is " << s1.size() << "\n";
    cout << "String2 = " << s2 << " and its lenght is " << s2.size() << "\n";

    s3 = s1 + s2;

    cout << "\nThe  string after the Concatenation of the two strings is :\n";
    cout << "String3 = String1 + String2\n";
    cout << "String3 = " << s3 << " and its length is " << s3.size() << "\n";

    cout << "\n";
//  for reverse in string . 
      char str1[100];
	cout << "\nEnter the String you want to reverse: ";
    cin >> str1;

    while (c != '\0')
    {
        c = str1[i];
        i++;
    }
    n = i - 1;

    

    char str2[i];

    i = 0;
    while (i != n + 1)
    {
        str2[i] = str1[n - i - 1];
        i++;
    }

    cout << "\nReverse of the entered string \"" << str1 << "\" is : \"" << str2 << "\n";



 // copy of string .
  char string1[100], string2[100];

    cout << "Enter string str1: ";
    cin.getline(string1, 100);

    strcpy(string2, string1);

    cout << "str1 = "<< string1 << endl;
    cout << "str2 = "<< string2;


string name;
    string name2 = "prasann";
    copyStr(name,name2);
    cout<<name;


  return 0;

}