class Solution {
public:
    void solve(int k, int n,vector<vector<int>>&output, vector<int>&temp, int num){
        //base case
        if(k==0 && n==0){
            output.push_back(temp);//ans store
            return;
        }
        for(int i=num; i<10; i++){
            temp.push_back(i);
            solve(k-1, n-i, output,temp, i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>output;
        vector<int>temp;
        solve(k,n,output, temp,1);
        return output;
    }
};