#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    //check if the string is a palindrome
    string p = "12321";
    // string pofm = p;
    // reverse(pofm.begin(),pofm.end());
    // if(p == pofm) cout<<"palindrome"<<endl;
    bool isPalindrome = true;
    for(int left = 0,right = p.size()-1;left<right;left++,right--){
        if(toupper(p[left])!=toupper(p[right])){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) cout<<"palindrome"<<endl;
    else cout<< "not a palindrome" << endl;

    return 0;
}