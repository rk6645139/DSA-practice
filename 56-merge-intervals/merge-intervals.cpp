class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(), intervals.end());
        int n=intervals.size();
        vector<int> curr=intervals[0];
        for( int i=0; i<n; i++){
            if(curr[1]>=intervals[i][0]){
                curr[1]=max(curr[1], intervals[i][1]);

            }
            else{
                result.push_back(curr);
                curr=intervals[i];
            }

        }
        result.push_back(curr);
        return result;

    }
};