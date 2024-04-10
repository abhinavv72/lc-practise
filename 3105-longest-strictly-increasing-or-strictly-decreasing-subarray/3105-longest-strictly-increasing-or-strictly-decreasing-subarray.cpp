class Solution {
public:
    int longestMonotonicSubarray(vector<int>& a) {
        int longestLength = 1;
        int n = a.size();
        for(int i=0; i<n; i++){
            int length =1 ;
            for(int j=1; j<=i; j++){
                if(a[j-1]<a[j]) length++;
                else{
                    longestLength =  max(longestLength, length);
                    length =1;
                }
            }
            longestLength = max(longestLength, length);
        }
            for(int i=0; i<n; i++){
            int length =1 ;
            for(int j=1; j<=i; j++){
                if(a[j-1]>a[j]) length++;
                else{
                    longestLength =  max(longestLength, length);
                    length =1;
                }
            }
            longestLength = max(longestLength, length);
        }
            return longestLength;
    }
};