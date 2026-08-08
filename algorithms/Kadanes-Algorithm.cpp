#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int value : nums) {
            currSum += value;
            maxSum = max(currSum, maxSum);
            if(currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {

    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    Solution s1;
    cout << s1.maxSubArray(nums);

    return 0;
}