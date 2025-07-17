#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string S = "Vignesh";
    auto A =  " Dandu";
    cout << S.append(A) << endl; // Appends A to S  

     string x = "10";
     int y = 20;
    // string z = x + y;

    string z = x + to_string(y);
    cout << z << endl; // This will print "1020"
    return 0;
}