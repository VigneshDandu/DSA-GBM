#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i =0;i<size;i++){
        if(arr[i] == target){
            return i; // Return the index of the target element
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout<< linearSearch(arr, 5, 3);
    return 0;
}