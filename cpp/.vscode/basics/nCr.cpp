#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    while(n >1){
        factorial = factorial * n;
        n--;
    }
    return factorial;
}
int nCr(int n, int r){
    int numerator = fact(n);
    int denominator = fact(r) * fact(n - r);
    return numerator / denominator;

}

int main(){
    cout <<nCr(8,2) << endl;
    return 0;
}