#include<stdio.h>
using namespace std;
int main(){
    char ch = 'a';
    if (ch <=96 && ch >= 65) {
        printf("Uppercase letter\n");
    } else if (ch >= 97 && ch <= 122) {
        printf("Lowercase letter\n");
    } else if (ch >= 48 && ch <= 57) {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
    return 0;
}