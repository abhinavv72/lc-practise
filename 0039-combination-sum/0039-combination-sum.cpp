class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>> &output,
               vector<int> &temp, int i) {
        //base case
        if(target == 0 ) {
            //ans store
            output.push_back(temp);
            return ;
        }
        
        if(target < 0 || i >= candidates.size()) 
            return;
        
        //exclude
        solve(candidates, target, output, temp, i+1);
        
        //include
        temp.push_back(candidates[i]);
        solve(candidates, target-candidates[i], output, temp, i);
        ///bactrack
        temp.pop_back();
      
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> output;
        vector<int> temp;
        
        solve(candidates, target, output, temp, 0);
        return output;
        
    }
};