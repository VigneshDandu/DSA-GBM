#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // OUTER LOOP: Controls the lines
    for (int i = 0; i < n; i++) {
        
        // INNER LOOP 1: Print the blank spaces first
        for (int j = 0; j < i; j++) {
            cout << " "; 
        }

        // INNER LOOP 2: Print the characters next
        for (int j = 0; j < n - i; j++) {
            // We calculate the character based on the row number (i)
            char ch = 'A' + i; 
            cout << ch;
        }

        // Move to the next line after both inner loops finish
        cout << endl;
    }

    return 0;
}