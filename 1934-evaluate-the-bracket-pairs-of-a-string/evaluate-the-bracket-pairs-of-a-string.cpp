class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res="";

        unordered_map<string, string> mp;
        for(auto &k:knowledge){
            mp[k[0]]=k[1];

        }
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                int j=s.find(')', i+1);
                auto t=s.substr(i+1, j-i-1);
                res+=mp.count(t)?mp[t]:"?";
                i=j;
            }
            else res+=s[i];
        }

        return res;
        
    }
};


// '''
// class Solution {
// public:
//     string evaluate(string s, auto& K) {
//         unordered_map<string, string> d;
//         for (auto& k : K)
//             d[k[0]] = k[1];

//         string res;
//         for (int i = 0; i < s.size(); ++i) {
//             if (s[i] == '(') {
//                 int j = s.find(")", i + 1);
//                 auto t = s.substr(i + 1, j - i - 1);
//                 res += d.count(t) ? d[t] : "?";
//                 i = j;
//             } else
//                 res += s[i];
//         }

//         return res;
//     }
// };'''