/**

Description:        This program will prompt the user for a string that will count the number of characters
Filename:           Midterm 2018 cis 201 
Author:             Carlos A. Perez Ortiz
Date:               10/20/18

*/
#include<iostream>
#include<string>

using namespace std;

string get_string(string prompt)
{
    string input;
    cout << prompt;
    getline(cin,input);
    return input;
}

int char_count(string c)
{
    int counter = 0;
    for (int i=0; i < c.size(); i++)
    {
        counter ++;
    }
    return counter;
}


int main()
{
    string input;
    input = get_string("Please enter a string to count its character:");
    int string_length;
    string_length = char_count(input);
    cout << "Your string is " << string_length << " characters long!" << endl;
    return 0;
}
