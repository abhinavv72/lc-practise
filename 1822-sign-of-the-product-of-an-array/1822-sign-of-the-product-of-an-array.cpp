class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x = 0;
        for(auto &i: nums){
            if(i<0)x ^= 1;
            else if(i==0)return 0;
        }
        if(x)return -1;
        return 1;
    }
};