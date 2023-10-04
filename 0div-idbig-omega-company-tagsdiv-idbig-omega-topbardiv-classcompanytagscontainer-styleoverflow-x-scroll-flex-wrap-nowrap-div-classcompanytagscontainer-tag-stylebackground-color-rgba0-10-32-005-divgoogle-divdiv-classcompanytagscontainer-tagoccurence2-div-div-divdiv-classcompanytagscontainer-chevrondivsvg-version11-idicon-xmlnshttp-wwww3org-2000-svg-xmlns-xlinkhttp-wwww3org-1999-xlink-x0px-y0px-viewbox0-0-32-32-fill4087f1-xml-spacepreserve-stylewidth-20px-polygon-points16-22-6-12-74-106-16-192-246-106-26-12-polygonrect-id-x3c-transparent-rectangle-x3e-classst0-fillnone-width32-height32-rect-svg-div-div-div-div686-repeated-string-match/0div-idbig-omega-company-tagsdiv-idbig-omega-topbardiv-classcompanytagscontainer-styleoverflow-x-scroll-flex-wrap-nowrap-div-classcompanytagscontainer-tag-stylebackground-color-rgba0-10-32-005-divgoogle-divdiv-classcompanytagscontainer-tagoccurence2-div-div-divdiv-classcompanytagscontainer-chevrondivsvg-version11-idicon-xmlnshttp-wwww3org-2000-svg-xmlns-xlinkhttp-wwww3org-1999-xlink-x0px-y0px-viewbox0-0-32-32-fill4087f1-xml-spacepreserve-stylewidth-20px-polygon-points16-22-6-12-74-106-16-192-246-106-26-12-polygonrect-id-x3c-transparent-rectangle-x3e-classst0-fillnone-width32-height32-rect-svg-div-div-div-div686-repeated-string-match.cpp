class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int len1 = a.length();
        int len2 = b.length();
        if(a==b)return 1;
        int count =0;
        string str =a ;
        while(a.length()<=10000){
        count++;
        
        int foundPos = a.find(b);
        if(foundPos != -1)return count;
        a+= str;
    }
    return -1;
    }
};