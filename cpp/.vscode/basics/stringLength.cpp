#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "Vignesh";
    string a = " Dandu";
    string sa = s+ a;
    cout << sa << endl << sa.length() << endl;
    cout <<s[1] << endl; // Accessing the second character of the string
    cout << sa[sa.length() - 3] << endl; // Accessing the last character of the string
    return 0;

}