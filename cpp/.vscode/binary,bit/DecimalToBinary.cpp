#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    int ans =0;
    int rem =0;
    int pow =1;
    cout <<  "Enter a number you want to convert to binary" << endl;
    cin >> n;
     while (n > 0){
        rem = n%2;
        n = n/2;

        ans+= rem * pow; 
        pow*=10;
     }
        cout << "The binary representation of the number is " << ans << endl;

    return 0;
}