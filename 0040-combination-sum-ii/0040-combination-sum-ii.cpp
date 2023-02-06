class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>> &output, vector<int> &temp, int index){
        //base casee
        if(target==0)
        {
            output.push_back(temp); //store the ans
            return;
        }
        if(target <0 || index >=candidates.size())
            return;
        for(int i= index; i<candidates.size(); i++){
            //special condition
            if(i > index && candidates[i]== candidates[i-1])
                continue;
            if(candidates[i] > target)
                break;
            temp.push_back(candidates[i]);
            solve(candidates, target-candidates[i], output, temp,i+1);
            temp.pop_back(); //backtrack
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>output;
        vector<int>temp;
        solve(candidates, target, output, temp,0);
        return output;
    }
};