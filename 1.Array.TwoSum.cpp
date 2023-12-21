class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // //Brute Force
        // for(int i = 0;i < nums.size()-1;i++){
        //     for(int j = i+1;j < nums.size();j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        // Hash map
        unordered_map<int, int> umap;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int complement = target - nums[i];
            if(umap.count(complement)){
                return {umap[complement], i};
            }
            else{
                umap[nums[i]] = i;
            }
        }
        return {};
    }
};