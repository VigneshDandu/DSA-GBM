#include <vector>


class Solution {
public:
    int singleNumber(const std::vector<int>& nums) {
        int ans = 0;
        for (int value : nums) {
            ans ^= value;
        }
        return ans;
    }
};
