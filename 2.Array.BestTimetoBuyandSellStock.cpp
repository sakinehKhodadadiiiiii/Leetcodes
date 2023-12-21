class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0;
        int l = 0;
        int r = 1;
        // // Brute Force
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n-1; j++){
        //         if(prices[j] > prices[i]){
        //             int diff = prices[j] - prices[i];
        //             maxp = max(diff, maxp);
        //         }
        //     }
        // }

        // Two pointer
        while(r < n){
            if(prices[r] > prices[l]){
                int diff = prices[r] - prices[l];
                maxp = max(diff, maxp);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxp;
    }
};