#include<bits/stdc++.h>

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        int high  = k - 1;
        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum = sum + nums[i];
        }
        double avg = (double)sum/k;
        if (nums.size() == 1) {
            return avg;
        }
        double res = INT_MIN;
        while (high < nums.size()) {
            res = max(res, avg);
            if (high == nums.size())
                break;
            sum = sum - nums[low];
            low++;
            high++;
            sum = sum + nums[high];
            avg = (double)sum/k;
        }
        return res == INT_MAX ? -1 : res;
    }
};