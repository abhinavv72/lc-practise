class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long ans = 1e18;
        sort(beans.begin(),beans.end());
        long long n = beans.size();
        long long totsum =0;
        for(auto it : beans) totsum+=it;
        for(long long i=0; i<n; i++){
            long long change = totsum -(n-i)*(long long )beans[i]*1LL;
            ans = min(ans, change);
        }
       return ans; 
    }
};