#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(5);
    cout << vec.size() << endl; // prints 1
    cout<< vec.capacity() << endl; // prints 1

    vec.push_back(10);
    cout << vec.size() << endl; // prints 2
    cout<< vec.capacity() << endl; // prints 2

    vec.push_back(15);
    cout << vec.size() << endl; // prints 3
    cout<< vec.capacity() << endl; // prints 4

    vec.push_back(20);
    cout << vec.size() << endl; // prints 4
    cout<< vec.capacity() << endl; // prints 4

    vec.push_back(25);
    cout << vec.size() << endl; // prints 5
    cout<< vec.capacity() << endl; // prints 8


    // capacity when overflowed doubles the previous capacity 
    // in such a way to accommodate new elements
    return 0;
}