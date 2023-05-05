class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        unordered_map<char,int> uno;
        string a=s.substr(0,k);
        // Count the number of vowels in the first k characters
        for(auto i:a)
        {
            if(i=='a' ||i=='e' || i=='i' || i=='o' || i=='u' )
            {
                uno[i]++;
            }
        }
        int count=0;
        // Sum up the number of vowels in the first k characters
        for(auto i:uno)
        {
            count += i.second;
        }

        int start=0;
        int end=k;
        int pre=count;

        // Use sliding window to find the maximum number of vowels in any k-length substring of s
        while(end<n)
        {
            // Update the number of vowels in the current k-length substring
            int local=pre;
            // Remove the first character from the substring
            a.erase(0,1);
            // Add the next character to the substring
            a += s[end];
            // Check if the first and last characters of the substring are vowels
            if(s[end]=='a' ||s[end]=='e' || s[end]=='i' || s[end]=='o' || s[end]=='u')
            {
                // If the first character was not a vowel, increment the vowel count
                if(!(s[start]=='a' ||s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'))
                {
                    local++;
                }
            }
            else
            {
                // If the first character was a vowel, decrement the vowel count
                if((s[start]=='a' ||s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'))
                {
                    local--;
                }
            }
            // Update the previous vowel count to the current vowel count
            pre=local;
            // Update the maximum vowel count found so far
            count=max(local,count);
            // Move the sliding window by one character
            start++;
            end++;
        }    
        // Return the maximum vowel count found
        return count;
    }
};