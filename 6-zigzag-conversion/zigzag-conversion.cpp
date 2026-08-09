class Solution {
public:
    string convert(string s, int nuro) {
        if(nuro<=1)return s;

        vector<string> v(nuro, "");

        int j=0, dir=-1;

        for(int i=0; i<s.length();i++){
            if(j==nuro-1|| j==0)dir*=(-1);

            v[j]+=s[i];

            if(dir==1)j++;
            else j--;
        }
        string res;
        for(auto &i:v)res+=i;

        return res;
    }
};