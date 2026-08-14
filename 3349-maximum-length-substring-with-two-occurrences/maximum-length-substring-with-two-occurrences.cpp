class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        
        int res=0;
        // for(char c :s){

        //     freq[c-'a']++;
        // }

        for(int i=0; i<n; i++){
            vector<int>freq(26, 0);
            for(int j=i; j<n; j++){

            freq[s[j]-'a']++;

            if(freq[s[j]-'a']>2){

                break;
            }
            

res = max(res, j - i + 1)   ;
     }
        
        }


        return res;

        

    }
};