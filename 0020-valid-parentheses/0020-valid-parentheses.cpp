class Solution {
public:
    bool isValid(string s) {
        stack<char>w;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('||  s[i]=='{'|| s[i]=='[')
                w.push(s[i]);
            else if(w.empty()==1)
                return false;
            else if(s[i]==')' && w.top()=='(' )
                w.pop();
            else if(s[i]=='}' && w.top()=='{')
                w.pop();
            else if(s[i]==']' && w.top()=='[')
                w.pop();
            else 
                return false;
        }
        if(w.empty()==1)
            return true;
        else 
            return false;
    }
};