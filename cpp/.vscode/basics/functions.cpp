#include <iostream>
#include <string>
using namespace std;

int sum(int a ,int b){
    int r = a + b;
    return r;
}
int fun(){
    return 2;
}
void printhello(const string& greet){
    cout << "hello " << greet << '\n';
}
int main(){
    cout << sum(3,4) << endl;
    printhello("world");
    cout << fun() << endl;
    return 0;

}