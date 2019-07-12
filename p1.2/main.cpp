/*
 •• P1.2Write a program that prints out a message “Hello, my name is Hal!” Then, on a new line, the program should print the message “What is your name?” As in Exercise • P1.1, just use the following lines of code:
 
 string user_name;
 getline(cin, user_name);
 Finally, the program should print the message “Hello, user name. I am glad to meet you!” To print the user name, simply use
 
 cout << user_name;
 As in Exercise • P1.1, you must place the line
 
 #include <string>
 before the main function.
 
 Here is a typical program run. The user input is printed in color.
 
 Hello, my name is Hal!
 What is your name?
 Dave
 Hello, Dave. I am glad to meet you!
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello, my name is Hal!" << endl;
    cout << "What is your name?: ";
    string user_name;
    getline(cin, user_name);
    cout << "Hello " << user_name << " I am glad to meet you!" << endl;
}
