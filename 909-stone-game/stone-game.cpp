class Solution {
public:
 bool stoneGame(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
         return solve(nums, dp, 0, nums.size()-1)>=0;
    }

int solve(vector<int>&nums,vector<vector<int>>&dp,int i, int j){
    if(i==j)return nums[i];

    if(dp[i][j]!=-1)return dp[i][j];

    int left=nums[i]-solve(nums,dp, i+1, j);
    int right=nums[j]-solve(nums,dp, i,  j-1);
    return dp[i][j]=max(left, right);

}
   
};