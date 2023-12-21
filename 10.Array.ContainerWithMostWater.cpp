class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxw = 0;
        int l = 0;
        int r = n - 1;
        while(l < r){
        int s = (r-l)*min(height[l], height[r]);
        maxw = max(maxw, s);
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
        }

        return maxw;
    }
};