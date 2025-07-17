#include<iostream>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
//    int arr[5]={1, 2, 3, 4, 5};
//    int rev_arr[5];
//    for(int i = 0; i < 5; i++){
//       rev_arr[i] = arr[4 - i];
//    }
//    cout << "Reversed Array: ";
//    for(int i = 0; i < 5; i++){
//       cout << rev_arr[i] << " ";
//    }
//    cout << endl;

    int arr[5]={6,5,3,4,6};
    for(int i =0;i<5/2;i++){
    swap(arr[i],arr[4 - i]);
    }

    for(int i =0; i< 5; i++){
        cout << arr[i] << " ";
    }
    
   return 0;
}
