class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> result;
        vector<vector<int>> output;
        ////Brute force
        // for(int i = 0; i < n-2; i++){
        //     for(int j = i+1; j < n-1; j++){
        //         for(int k = j+1; k < n; k++){
        //             if((nums[i] + nums[j] + nums[k] == 0) && i != j && j != k && i != k){
        //                 result.insert({nums[i], nums[j], nums[k]});
        //             }
        //         }
        //     }
        // }
        for(int i = 0; i < n-2; i++){
            int l = i + 1;
            int r = n - 1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] == 0){
                result.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
            else if(nums[i] + nums[l] + nums[r] < 0){
                l++;
            }
            else{
                r--;
            }
            }
        }
        for(auto it: result){
            output.push_back(it);
        }
        return output;
    }
};