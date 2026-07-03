#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 10;

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Positions are " << left
                 << " and " << right << endl;
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}
