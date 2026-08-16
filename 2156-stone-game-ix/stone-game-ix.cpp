class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        // int n=stones.size();
        // int sum=stones[0];
        // int i=0, j=n-1;

        // while(i<=j){
        //     if((sum+=stones[i])%3==0){
        //         return false;
        //         break;
        //     }
        //     i++;
        //     if((sum+=stones[j])%3==0){
        //         return true;
        //         break;
        //     }
        //     j--;
        // }

        // return false;

        vector<int>count(3);
        for(int i: stones){
            count[i%3]++;
        }


        if(count[0]%2==0){
            return count[1]>0 && count[2]>0;
        }
        return abs(count[1]-count[2])>2;
        
    }
};