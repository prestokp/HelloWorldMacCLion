//Kirk Preston
//June 6th, 2019
//HelloWorldClion.cpp
//This is a redo of my first C++ Program using CLion

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your first name: ";
    cin >> name;

    cout << "Hello, " << name << ". I am your computer!\n";

    system("Pause");

    return 0;
}