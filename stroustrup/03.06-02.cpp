
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
    int number_of_words = 0;
    int repeats = 0;//initiate repeats, my addition to the script
    string previous = " ";// not a word
    string current;
    while (cin>>current) {
        ++number_of_words;// increase word count
        if (previous != current) repeats = 0; //if no repeat then reset repeat counter
        if (previous == current)
            ++repeats &&//increment repeat counter
            cout << "word number " << number_of_words
                << " repeated: " << current << '\n'
                << repeats << "times" << '\n';//print the repeat number
        previous = current;
    }
}
