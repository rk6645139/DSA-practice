class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        int left=0;
        int n=nums.size();
        int mxLen=0;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;

            while(freq[nums[i]]>k){
                freq[nums[left]]--;
                left++;
                    }
                    
                    mxLen=max(mxLen, i-left+1);        }


                    return mxLen;

        


    }
};