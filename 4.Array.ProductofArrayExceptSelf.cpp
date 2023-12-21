class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        vector<int> prefix(n,1);
        vector<int> postfix(n,1);
        for(int i = 0; i < n-1; i++){
            prefix[i+1] = nums[i]*prefix[i];
        }
        for(int i = n-1; i > 0; i--){
            postfix[i-1] = nums[i]*postfix[i];
        }

        for(int i = 0; i< n; i++){
            output[i] = prefix[i]*postfix[i];
        }
        return output;
    }
};