class Solution {
public:
    int countPairs(vector<int>& a, int target) {
        int i, j, ans,n;
        n = a.size();
        ans =0;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(a[i]+a[j]<target)ans++;
            }
        }
        return ans;
    }
};