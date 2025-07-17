#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;
    cout << (x<y) << endl;
    cout << (x==y) << endl;
    auto m = 10;
    auto n = 15;
    cout << (m<n && n==m) << endl;
    
    return 0;
}