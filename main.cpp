/**

Description:        This program will prompt the user for a string that will count the number of characters
Filename:           Midterm 2018 cis 201 
Author:             Carlos A. Perez Ortiz
Date:               10/20/18

*/
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

string get_string(string prompt)        //The prompt will get the string for the user
{
    string input;
    cout << prompt;
    getline(cin,input);
    return input;
}

int char_count(string c,char uc)                //Simple character count using a for loop and counter 
{
    int counter = 0;
    for (int i=0; i < c.size(); i++)
    {
        char cc = tolower( c.at(i) );
        if (cc == tolower( uc ))
        {
        counter++;
        }
    }
    return counter;
}


int main()
{
    string input;                                                                   
    input = get_string("Please enter a string to count its character:"); 
    
    char user_char;
    cout << "Please enter the character to count (Not case-sensitive):";
    cin >> user_char;

    int string_length;
    string_length = char_count(input,user_char);
    
    cout << "Your string has " << string_length << " instances of the character " << user_char << "!" << endl;
    
    return 0;
}
