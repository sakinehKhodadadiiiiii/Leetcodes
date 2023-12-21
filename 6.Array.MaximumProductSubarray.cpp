class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = *max_element(nums.begin(), nums.end());
        int curMax = 1, curMin = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                curMax = 1;
                curMin = 1;
            }
            int tmp = nums[i]*curMax;
            curMax = max(max(nums[i]*curMax, nums[i]*curMin), nums[i]);
            curMin = min(min(tmp, nums[i]*curMin), nums[i]);
            ans = max(ans, curMax);
        }
        return ans;
    }
};