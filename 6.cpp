#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;

int main(){
    string s ="capegemini";
    string r =  s.reverse(s.begin(),s.end());
    cout << r << endl;
    return 0;
}