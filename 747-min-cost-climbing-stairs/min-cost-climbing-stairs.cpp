class Solution {
public:
    int solve3(vector<int> &cost,int n){
        vector<int> dp(n+1);
        dp[0]=cost[0];
        dp[1]=cost[1];

        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
    int solve(vector<int> &cost,int n){
        int prev2=cost[0];
        int prev1=cost[1];

        for(int i=2;i<n;i++){
            int curr=cost[i]+min(prev1,prev2);
            prev2=prev1;
            prev1=curr;
        }
        return min(prev1,prev2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return solve(cost,n);
    }
};