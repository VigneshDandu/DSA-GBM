#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;



int main(){
    vector<int> arr = {1,2,3,4,5,3,2,1};
    int left = 0;
    int right = arr.size()-1;
    bool isArrayPalindrome = true;
    
    while(left<right){
        if(arr[left]!=arr[right]){
            isArrayPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if(isArrayPalindrome){
        cout << "Palindrome" << endl;
    } else {
        cout << "not a palindrome" << endl;
    }


    // when not an array
    int num = 123454321;
    string s = to_string(num);
    cout << s <<endl;
    int l = 0;
    int r = s.size()-1;
    bool isNumberPalindrome = true;
    while(l<r){
        if(s[l]!=s[r]){
            isNumberPalindrome = false;
            break;
        }
        l++;
        r--;
    }
    if(isNumberPalindrome){
        cout << "palindrome"<<endl;
    } else {
        cout << "not a palindrome"<<endl;
    }

    return 0;
}