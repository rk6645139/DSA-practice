// class Solution {
// public:
// bool canwin(int n){
//     if(n==0)return false;

//     for(int i=1; (i*i)<=n; i++){
//         if(!canwin(n-i*i))return true;
//     }

//     return false;
// }
//     bool winnerSquareGame(int n) {
//         return canwin(n);
//     }
// };


class Solution {
public:
vector<int>memo;
bool canwin(int n){
    if(n==0)return false;
    if(memo[n]!=0)return memo[n]==1;

    bool result=false;

    for(int i=1; (i*i)<=n; i++){
        if(!canwin(n-i*i)){result= true;break;}
    }
    memo[n]=result?1:-1;

    return result;;
}
    bool winnerSquareGame(int n) {
        memo.assign(n+1, 0);
        return canwin(n);
    }
};

// class Solution {
// public:
//     vector<int> memo; // 0 = unvisited, 1 = true, -1 = false
    
//     bool canWin(int stones) {
//         if (stones == 0) return false;
//         if (memo[stones] != 0) return memo[stones] == 1;
        
//         bool result = false;
//         for (int i = 1; i * i <= stones; i++) {
//             if (!canWin(stones - i * i)) {
//                 result = true;
//                 break;
//             }
//         }
        
//         memo[stones] = result ? 1 : -1;
//         return result;
//     }
    
//     bool winnerSquareGame(int n) {
//         memo.assign(n + 1, 0);
//         return canWin(n);
//     }
// };