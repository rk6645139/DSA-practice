class Solution {
public:
    string decodeString(string s) {
        int i=0;
        return solve(i, s);
    }

    string solve(int &i, string s){
        int num=0;
        string word="";

        for(; i<s.size();i++){
            char c=s[i];

            if(c=='['){
                string cur=solve(++i, s);
                for(; num>0;num--)word+=cur;
            }
            else if(c>='0' && c<='9'){
                num=num*10+(c-'0');
            }
            else if(c==']'){
                return word;
            }
            else{
                word+=c;
        }
        }

        return word;
    }
};