class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        // // Brute Force
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // // sorting
        // sort(nums.begin(), nums.end()); 
        // for(int i=0; i<n-1;i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        //hash map
        unordered_map<int, int> umap;
        for(int i = 0; i < n; i++){
            if(umap.count(nums[i])){
                return true;
            }
            else{
                umap[nums[i]] = i;
            }
        }
        return false;
    }
};