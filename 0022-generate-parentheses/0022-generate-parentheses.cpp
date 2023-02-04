class Solution {
public:
    //basecase
    void solve(int currOpen, int currClose, int remOpen, int remClose, vector<string>&result, string&output){
        if(remOpen == 0 && remClose == 0){
            result.push_back(output);
            return;
        }
        if(remOpen>0){
            output.push_back('(');
            solve(currOpen+1, currClose, remOpen-1, remClose, result, output);
            output.pop_back();
        }
       if(remClose > 0 && currOpen > currClose){
           output.push_back(')');
           solve(currOpen,currClose+1, remOpen, remClose-1, result, output);
           output.pop_back();
       }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string output ="(";
        
        int currOpen =1;
        int currClose =0;
        int remOpen = n-1;
        int remClose =n;
        
        solve(currOpen, currClose, remOpen, remClose, result, output);
    
        return result;
    
    }
};