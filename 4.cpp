#include <vector>
#include <iostream>
using namespace std;

// function lives OUTSIDE main — its own room on the floor
vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2 * n);

    for(int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[n + i] = nums[i];
    }

    return ans;
}

// main is a separate room that CALLS the function
int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> result = getConcatenation(nums);

    for(int x : result) {
        cout << x << " ";   // Output: 1 2 3 1 2 3
    }

    return 0;
}