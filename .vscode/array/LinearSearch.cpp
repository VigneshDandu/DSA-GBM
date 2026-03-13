#include<iostream>
using namespace std;
int main(){

    int linearsearch[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = sizeof(linearsearch) / sizeof(linearsearch[0]);
    int foundIndex = -1;

    for (int i = 0; i < size; i++) {
        if (linearsearch[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Target found at index: " << foundIndex << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}