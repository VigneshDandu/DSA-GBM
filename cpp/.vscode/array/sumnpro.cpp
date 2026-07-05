#include<iostream>
using namespace std;

int main(){

    int arr[]={10,20,45,13,56,48};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0 ; i< size ; i++){
        sum += arr[i];
    }
    cout << "Sum of all elements: " << sum << endl;

    int product =1;
    for(int i =0;i<size;i++){
        product *=arr[i];
    }

    cout << "Product of all elements are " << product << endl;

    return 0;
}