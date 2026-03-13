#include<iostream>
using namespace std;

int main(){

    // int marks[5] = {10, 20, 30, 40, 50};
    // cout<< marks[0] << endl;
    // cout<< marks[1] << endl;
    // cout<< marks[2] << endl;
    // cout<< marks[3] << endl;   
    // cout<< marks[4] << endl;
    // int sz = sizeof(marks) / sizeof(marks[0]);
    
    // for (int i = 0; i < sz; i++) {
    //     cout << marks[i] << endl;
    // }

    int arr[5] = {10, 20, 30, 40, 50};

// Input
    for (int i = 0; i < 5; i++) cin >> arr[i];

// Output
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";




    return 0;
}