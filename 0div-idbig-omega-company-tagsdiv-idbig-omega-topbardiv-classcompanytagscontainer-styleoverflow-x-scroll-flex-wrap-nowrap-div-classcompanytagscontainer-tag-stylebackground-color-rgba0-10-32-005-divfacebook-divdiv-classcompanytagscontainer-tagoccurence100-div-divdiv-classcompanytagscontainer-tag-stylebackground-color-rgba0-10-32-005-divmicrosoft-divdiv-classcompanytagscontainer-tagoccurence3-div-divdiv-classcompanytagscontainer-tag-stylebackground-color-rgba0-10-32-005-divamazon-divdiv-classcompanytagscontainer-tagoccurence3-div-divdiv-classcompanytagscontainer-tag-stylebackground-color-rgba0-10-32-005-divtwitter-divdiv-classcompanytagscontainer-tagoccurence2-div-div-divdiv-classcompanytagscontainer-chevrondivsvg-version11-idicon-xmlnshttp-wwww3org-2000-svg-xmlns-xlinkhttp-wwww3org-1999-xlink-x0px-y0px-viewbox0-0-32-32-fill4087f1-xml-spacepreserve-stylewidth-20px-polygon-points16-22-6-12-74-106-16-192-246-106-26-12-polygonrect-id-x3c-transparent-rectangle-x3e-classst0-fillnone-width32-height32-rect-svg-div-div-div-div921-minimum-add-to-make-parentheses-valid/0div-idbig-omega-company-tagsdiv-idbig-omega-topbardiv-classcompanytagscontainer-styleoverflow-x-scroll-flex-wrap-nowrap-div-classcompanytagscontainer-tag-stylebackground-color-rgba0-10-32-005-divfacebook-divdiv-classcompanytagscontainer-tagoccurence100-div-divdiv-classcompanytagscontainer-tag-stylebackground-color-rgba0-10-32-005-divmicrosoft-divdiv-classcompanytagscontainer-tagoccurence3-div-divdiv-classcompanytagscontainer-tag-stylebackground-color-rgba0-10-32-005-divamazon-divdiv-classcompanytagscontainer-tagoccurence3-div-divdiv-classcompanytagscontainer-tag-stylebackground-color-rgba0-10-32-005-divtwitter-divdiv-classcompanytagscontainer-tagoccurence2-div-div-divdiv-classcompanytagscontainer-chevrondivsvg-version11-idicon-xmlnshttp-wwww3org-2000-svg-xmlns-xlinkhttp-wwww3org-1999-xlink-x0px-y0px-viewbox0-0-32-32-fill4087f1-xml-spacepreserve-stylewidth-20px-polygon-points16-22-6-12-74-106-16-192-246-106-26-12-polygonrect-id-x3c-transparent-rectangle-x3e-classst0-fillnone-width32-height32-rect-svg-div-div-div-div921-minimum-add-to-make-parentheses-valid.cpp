class Solution {
public:
    int minAddToMakeValid(string s) {
        int open =0;
        int close =0;
        //iterate through string
        for(int i=0; i<s.size(); i++){
         if(s[i]=='('){
             close++;
         }
            if(s[i]==')'){
                if(close>0){
                    close--;
                }else{
                    open++;
                }
            }
        }
        return open + close;
    }
};