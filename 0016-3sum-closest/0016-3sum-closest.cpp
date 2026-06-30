#include <bits/stdc++.h>

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int result_sum = nums[0] + nums[1] + nums[2];
        int max_diff = abs(result_sum - target);

        for (int i = 0; i < n -2; i++) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if (diff < max_diff){
                    max_diff = diff;
                    result_sum = sum;
                }
                if (sum == target) {
                    return sum;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }


            }
        }
        return result_sum;
    }
};