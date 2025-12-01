#include<iostream>
using namespace std;

int SumTillN(int N){
    int sum = 0;
    int i = 1;
    while(i <= N){
        sum += i;
        i++;
    }
    return sum;
}
int main(){
    cout << "Sum till N: " << SumTillN(10) << endl;
    return 0;
}