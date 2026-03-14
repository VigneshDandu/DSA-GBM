#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}


int main() {
    int array[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 8;

    linearSearch(array, size, target);

    return 0;
}