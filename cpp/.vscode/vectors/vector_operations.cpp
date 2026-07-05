#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec; //initially empty vector
   // cout <<vec[0]<<endl; //undefined behavior: gives segmentation fault
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << vec[0]<<endl; //prints 10
    cout << vec[1]<<endl; //prints 20
    cout << vec[2]<<endl; //prints 30
    cout << vec[3]<<endl; //prints 40

    vec.pop_back(); //removes last element
    
    cout << "After pop_back operation:"<<endl;
    
    cout << vec[0]<<endl; //prints 10
    cout << vec[1]<<endl; //prints 20
    cout << vec[2]<<endl; //prints 30   
}