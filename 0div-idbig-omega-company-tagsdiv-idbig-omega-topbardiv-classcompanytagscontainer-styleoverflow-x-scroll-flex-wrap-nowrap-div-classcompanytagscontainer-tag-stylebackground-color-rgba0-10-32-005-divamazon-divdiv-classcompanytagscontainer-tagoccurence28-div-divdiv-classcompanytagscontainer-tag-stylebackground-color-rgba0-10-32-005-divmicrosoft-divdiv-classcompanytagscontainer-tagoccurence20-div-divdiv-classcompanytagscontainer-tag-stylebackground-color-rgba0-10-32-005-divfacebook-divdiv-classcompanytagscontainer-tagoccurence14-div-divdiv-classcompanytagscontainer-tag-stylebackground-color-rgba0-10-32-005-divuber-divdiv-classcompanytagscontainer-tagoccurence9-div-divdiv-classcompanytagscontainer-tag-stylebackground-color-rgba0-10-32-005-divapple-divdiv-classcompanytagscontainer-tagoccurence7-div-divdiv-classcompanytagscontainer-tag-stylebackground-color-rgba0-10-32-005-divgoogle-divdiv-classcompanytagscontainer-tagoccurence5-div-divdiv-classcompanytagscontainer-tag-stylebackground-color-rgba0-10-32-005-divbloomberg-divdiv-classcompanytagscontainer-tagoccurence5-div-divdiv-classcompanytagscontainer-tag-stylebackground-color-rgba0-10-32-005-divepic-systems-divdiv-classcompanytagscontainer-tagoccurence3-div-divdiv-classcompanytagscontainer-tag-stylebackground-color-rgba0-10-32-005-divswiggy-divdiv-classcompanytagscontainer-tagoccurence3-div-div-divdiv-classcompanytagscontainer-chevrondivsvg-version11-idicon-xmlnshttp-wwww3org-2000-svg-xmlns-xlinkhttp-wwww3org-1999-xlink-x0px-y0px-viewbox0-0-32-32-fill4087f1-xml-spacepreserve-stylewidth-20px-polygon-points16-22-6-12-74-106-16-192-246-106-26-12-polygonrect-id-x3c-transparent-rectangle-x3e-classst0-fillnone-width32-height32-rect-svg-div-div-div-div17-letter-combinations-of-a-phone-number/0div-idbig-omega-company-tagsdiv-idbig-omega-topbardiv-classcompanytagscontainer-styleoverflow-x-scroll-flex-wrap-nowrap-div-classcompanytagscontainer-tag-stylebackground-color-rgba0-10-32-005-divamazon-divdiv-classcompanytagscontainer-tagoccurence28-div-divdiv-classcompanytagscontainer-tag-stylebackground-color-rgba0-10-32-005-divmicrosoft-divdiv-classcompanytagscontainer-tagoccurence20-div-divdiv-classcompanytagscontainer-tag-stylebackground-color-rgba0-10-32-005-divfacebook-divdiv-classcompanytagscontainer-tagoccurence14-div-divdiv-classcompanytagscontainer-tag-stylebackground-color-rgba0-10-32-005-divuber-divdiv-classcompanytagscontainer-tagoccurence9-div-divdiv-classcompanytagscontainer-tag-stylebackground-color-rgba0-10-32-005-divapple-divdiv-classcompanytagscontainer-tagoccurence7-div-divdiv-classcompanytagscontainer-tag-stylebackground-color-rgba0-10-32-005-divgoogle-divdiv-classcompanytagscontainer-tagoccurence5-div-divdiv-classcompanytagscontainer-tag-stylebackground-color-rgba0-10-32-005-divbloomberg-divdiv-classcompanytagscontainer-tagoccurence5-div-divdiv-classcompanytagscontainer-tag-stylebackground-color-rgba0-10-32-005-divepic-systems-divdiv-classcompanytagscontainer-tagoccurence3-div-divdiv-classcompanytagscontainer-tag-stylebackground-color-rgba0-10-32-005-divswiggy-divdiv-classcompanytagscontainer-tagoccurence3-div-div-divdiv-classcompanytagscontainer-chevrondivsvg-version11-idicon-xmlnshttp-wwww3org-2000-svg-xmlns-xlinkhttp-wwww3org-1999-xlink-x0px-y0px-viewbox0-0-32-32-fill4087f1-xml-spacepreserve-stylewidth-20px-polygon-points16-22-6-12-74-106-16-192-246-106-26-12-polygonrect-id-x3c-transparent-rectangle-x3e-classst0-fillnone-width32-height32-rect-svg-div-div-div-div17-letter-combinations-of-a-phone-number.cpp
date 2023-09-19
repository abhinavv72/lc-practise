class Solution {
public:
    vector<string>rec(string & d, int i, map<int,string>&m){
        if(i==d.size()) return{""};
        vector<string>temp = rec(d,i+1,m);
        vector<string>ans;
        for(auto a:m[d[i]-'0']){
            for(auto x:temp){
                ans.push_back(a+x);
                
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string d) {
        if(d.size()==0) return{};
        map<int,string>m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        return rec(d,0,m);
    }
};