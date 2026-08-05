#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Your solution
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution s;
    vector<int> ans = s.twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;
}