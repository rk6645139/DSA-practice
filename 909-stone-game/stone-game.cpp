class Solution {
public:


int solve(vector<int>&nums,vector<vector<int>>&dp,int i, int j){
    if(i==j)return nums[i];

    if(dp[i][j]!=-1)return dp[i][j];

    int left=nums[i]-solve(nums,dp, i+1, j);
    int right=nums[j]-solve(nums,dp, i,  j-1);
    return dp[i][j]=max(left, right);

}

 bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
         return solve(piles, dp, 0, piles.size()-1)>=0;
    }
   
};