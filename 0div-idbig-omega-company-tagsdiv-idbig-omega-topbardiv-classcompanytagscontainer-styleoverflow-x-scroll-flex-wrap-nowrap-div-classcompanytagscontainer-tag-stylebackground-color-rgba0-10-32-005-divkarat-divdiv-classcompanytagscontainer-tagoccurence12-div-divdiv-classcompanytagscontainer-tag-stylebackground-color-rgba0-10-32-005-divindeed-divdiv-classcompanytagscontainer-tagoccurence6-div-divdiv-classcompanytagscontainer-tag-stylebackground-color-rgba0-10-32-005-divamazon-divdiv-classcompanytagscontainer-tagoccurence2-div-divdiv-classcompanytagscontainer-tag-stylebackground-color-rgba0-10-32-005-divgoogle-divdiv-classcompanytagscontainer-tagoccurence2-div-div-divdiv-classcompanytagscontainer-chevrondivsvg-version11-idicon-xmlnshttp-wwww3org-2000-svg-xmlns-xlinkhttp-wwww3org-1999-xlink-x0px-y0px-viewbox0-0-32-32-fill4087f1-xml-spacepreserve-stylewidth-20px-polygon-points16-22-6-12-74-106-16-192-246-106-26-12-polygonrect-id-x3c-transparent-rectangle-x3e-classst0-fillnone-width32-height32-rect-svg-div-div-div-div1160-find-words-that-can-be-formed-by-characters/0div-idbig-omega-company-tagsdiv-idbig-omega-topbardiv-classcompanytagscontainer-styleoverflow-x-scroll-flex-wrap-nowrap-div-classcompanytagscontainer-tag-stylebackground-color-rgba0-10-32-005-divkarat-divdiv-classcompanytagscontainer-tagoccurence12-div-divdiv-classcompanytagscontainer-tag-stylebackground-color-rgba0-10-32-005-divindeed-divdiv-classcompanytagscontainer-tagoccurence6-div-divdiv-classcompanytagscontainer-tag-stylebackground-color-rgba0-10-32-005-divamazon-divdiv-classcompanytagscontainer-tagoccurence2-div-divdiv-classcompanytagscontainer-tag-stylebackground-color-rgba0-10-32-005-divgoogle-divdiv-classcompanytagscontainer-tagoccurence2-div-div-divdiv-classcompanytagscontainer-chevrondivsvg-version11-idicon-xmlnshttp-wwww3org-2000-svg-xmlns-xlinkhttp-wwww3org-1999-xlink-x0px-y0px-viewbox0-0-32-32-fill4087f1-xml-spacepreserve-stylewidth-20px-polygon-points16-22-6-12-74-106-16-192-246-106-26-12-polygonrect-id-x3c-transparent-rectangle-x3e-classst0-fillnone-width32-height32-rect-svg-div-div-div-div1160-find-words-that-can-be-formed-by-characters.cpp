class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int freq[26]={};
        for(int i=0; i<chars.length(); i++){
            freq[chars[i]-'a']++;
        }
        int result =0;
        for(auto w : words){
            int characters[26]={};
            int flag =0;
            for(auto c :w){
            characters[c-'a']++;
                if(characters[c-'a']>freq[c-'a']){
                flag =1;
                break;
                }
            }
            if(flag==0){
                result +=w.length();
            }
        }
        return result;
    }
};