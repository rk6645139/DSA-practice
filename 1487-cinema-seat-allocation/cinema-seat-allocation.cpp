class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int>row_mask;
        for(auto &res: reservedSeats){
            int row=res[0], seat=res[1];
            if(seat<2 || seat>9)continue;


            row_mask[row]|=(1<<(seat-2));

        }
        int leftm=0b00001111;
        int middlem=0b00111100;

        int rightm=0b11110000;

        int total=2*(n-row_mask.size());
        for(auto&[row,mask]:row_mask){
            bool leftf=(mask & leftm)==0;

            bool midf=(mask & middlem)==0;
            bool rightf=(mask & rightm)==0;

            if(leftf && rightf){
                total+=2;
            }
            else if(leftf|| rightf|| midf){
                total+=1;
            }

        }

        return total;

    }
};