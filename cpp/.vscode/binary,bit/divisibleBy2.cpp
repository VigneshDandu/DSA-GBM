#include<iostream>
using namespace std;
int main(){
    int d;
    int sum = 0;
    int place = 1;
    cout << "Enter a number : " << endl;
    cin >> d ;

    if(d % 2 == 0){
        cout << d << " is divisible by 2" << endl;
    } else {
        cout << d << " is not divisible by 2" << endl;
    }

    while(d!=0){
        sum += (d % 2) * place;
        d /= 2;
        place *= 10;
    }

    cout << "Binary : " << sum << endl;
    return 0;
}