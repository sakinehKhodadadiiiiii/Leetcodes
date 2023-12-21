class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxp = nums[0];
        int curSum = 0;
        for(int i = 0; i < n; i++){
            if(curSum < 0){
                curSum = 0;
            }
            curSum += nums[i];
            maxp = max(maxp, curSum);
        }
        return maxp;
    }
};