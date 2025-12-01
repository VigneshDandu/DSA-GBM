#include <iostream>
using namespace std;

int num(int n){
    if (n <= 1) {
        cout << n << " is not a prime number" << endl;
        return 0;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            cout << n << " is not a prime number" << endl;
            return 0;
        }
    }
    cout << n << " is a prime number" << endl;
    return 1;
}

int main(){
    cout << "num " << num(73) << endl;
    return 0;
}