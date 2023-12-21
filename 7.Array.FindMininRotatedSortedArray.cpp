class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int  left = 0;
        int right = n-1;
        while(left <= right){
            if(nums[left] <= nums[right]) return nums[left];
            int mid = (left+right)/2;
            if(nums[left] > nums[mid]){
                right = mid;
            }
            else if(nums[mid] > nums[right]){
                left = mid + 1;
            }
        }
        if(nums[left] <= nums[right]) return nums[left];
        return -1;
    }
};