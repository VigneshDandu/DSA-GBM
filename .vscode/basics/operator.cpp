#include<iostream>
using namespace std;

int main(){
    int x = 10;         // x is initialized to 10
    cout << (x += 5) << endl;  // x = x + 5 → 15, prints 15
    cout << (x -= 3) << endl;  // x = x - 3 → 12, prints 12
    cout << (x *= 2) << endl;  // x = x * 2 → 24, prints 24
    cout << (x /= 4) << endl;  // x = x / 4 → 6, prints 6
    cout << (x %= 5) << endl;  // x = x % 5 → 1, prints 1
    cout << x << endl;         // prints current x (1)
    cout << ++x << endl;       // pre-increment: x becomes 2, prints 2
    cout << --x << endl;       // pre-decrement: x becomes 1, prints 1
    cout << x++ << endl;       // post-increment: prints 1, then x becomes 2
    cout << x-- << endl;       // post-decrement: prints 2, then x becomes 1

    int cat=14;
    double dog= double(cat);  // cat is converted to double (14.0)
    double pig=cat;
    cout << cat << endl;      // prints 14
    cout << dog << endl;      // prints 14 as double
    cout << pig << endl;      // prints 14 as double
    return 0;
}