class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        int low = 0;
        int high = nums.size() - 1;
        while (low < high) {
            swap(nums[low], nums[high]);
            low++;
            high--;
        }
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};