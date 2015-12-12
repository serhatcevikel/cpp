
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
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;// read two strings
    cout << "Hello, " << first <<" " << second << '\n';
}
