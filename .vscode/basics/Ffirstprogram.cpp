// #include<iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World! vignesh" << endl;
//     return 0;
// }

#include <cstdio>
using namespace std;

const char* printMessage() {
    return "This is a simple message from a function.";
}

void printMessageVoid() {
    puts("This function does not return anything.");
}

char characters(){
    return 'v';
}

int main(){
    puts("Hello, World! vignesh");
    puts("This is my first program in C++");
    puts(printMessage()); //we call the printMessage function and print its return value using puts
    printMessageVoid(); //we call the printMessageVoid function which does not return anything, it will print its message directly
    putchar(characters()); //we use putchar to print a single character returned by the characters function
    puts("\nEnd of program.");
    return 0;
}

// this is a comment
/*
this is a multiline comment 
*/


