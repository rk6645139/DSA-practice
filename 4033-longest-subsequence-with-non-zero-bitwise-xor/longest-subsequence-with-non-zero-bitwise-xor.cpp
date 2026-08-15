class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        // int sum=0, n=nums.size();
        // bool all0=1;

        // for(int num:nums){
        //     sum^=num;
        //     all0&=num==0;
        // }

        // return all0?0:n-(sum==0);

        return ranges::all_of(nums, [](int num){return num==0;})?0:nums.size()-(reduce(nums.begin(), nums.end(), 0, bit_xor<>())==0);

    }
};