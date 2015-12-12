
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

//#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???";// string variable
// ("???” means “don’t know the name”)
    int age = -1;// integer variable (–1 means “don’t know the age”)
    cin >> first_name >> age;// read a string followed by an integer
    cout << "Hello, " << first_name << " (age " << age << ")\n";
}

