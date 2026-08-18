class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int i=0, j=nums.size();
        vector<int>nnn;
        unordered_map<int,int>windowFreq;
        
        
        while(i<j-k+1){
            unordered_map<int,int>freq;
            int count=0;
            
            span<int> sub =span(nums).subspan(i, k);
            for(int num:sub){
                freq[num]++;

            }
             for (int nn : sub) {
                if (freq[nn] > 0) {
                    windowFreq[nn]++;
                    freq[nn] = 0;  // prevent counting it again
                }
            }
            i++;
        }

        for (const auto& pair : windowFreq) {
            if (pair.second == 1) {
                nnn.push_back(pair.first);
            }
        }
        
        if(nnn.size()>0){
            int mx=0;
            for(int numnum:nnn){
                mx=max(mx, numnum);
            }
            return mx;
        }

        return -1;
    }
};