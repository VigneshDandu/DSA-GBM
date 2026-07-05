#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = { 10, 20, 45, 13, 56, 48 };

    // Find max/min indices
    int maxIdx = 0;
    int minIdx = 0;
    for (int i = 1; i < (int)arr.size(); ++i) {
        if (arr[i] > arr[maxIdx]) maxIdx = i;
        if (arr[i] < arr[minIdx]) minIdx = i;
    }

    cout << "Before swap: ";
    for (int v : arr) cout << v << " ";
    cout << "\n";

    swap(arr[maxIdx], arr[minIdx]);

    cout << "After swap (max/min): ";
    for (int v : arr) cout << v << " ";
    cout << "\n";

    return 0;
}