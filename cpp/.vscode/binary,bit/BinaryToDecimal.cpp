#include<iostream>
using namespace std;

int main(){
    int b;
    cout << "Enter a number: " << endl;
    cin >> b;
    
    int ans = 0;
    int pow = 1;
    while (b > 0) {
        int rem = b % 10;
        b = b / 10;
        ans += rem * pow;
        pow *= 2;
    }

    cout << "The decimal representation of the number is " << ans << endl;
    return 0;
}