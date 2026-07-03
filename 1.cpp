#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

vector<int> arr = {1, 2, 3, 4, 5};
int main() {
	cout << arr[4] << endl; // Prints the last element of the array.
    arr.push_back(6); // Adds a new element to the end of the array.    
    arr.pop_back(); // Removes the last element of the array.
    arr.insert(arr.begin() + 2, 10); // Inserts the value 10 at index 2.
    cout << arr.size() << endl;
    for(int i = 0; i < arr.size(); i ++){
        cout << arr[i] << " "; // Prints all elements of the array.
    }


    
	return 0;
}