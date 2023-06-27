class Solution {
public:
    
    static bool compare(vector<int> v1, vector<int> v2){
        return (v1[0]+v1[1] < v2[0]+v2[1]);
    }
    
   
    int search(vector<int>& b, int k){
        int m=b.size();
        int l=0, r=m-1;
        while(l<r){
            int mid=l+(r-l+1)/2;
            if(b[mid]<=k){
                l=mid;
            }else{
                r=mid-1;
            }
        }
        return (b[l] <= k ? l:-1);
    }
    
    long long int count(vector<int>& a, vector<int>& b, int target){
        int n=a.size();
        long long int c=0;
        for(int i=0;i<n;i++){
            int x=target-a[i];
            int idx=search(b,x);
            if(idx!=-1) c+=(idx+1);
        }
        return c;
    } 
    
    vector<vector<int>> kSmallestPairs(vector<int>& a, vector<int>& b, int k) {
        int n=a.size(), m=b.size();
        
        
        int l=a[0]+b[0], r=a[n-1]+b[m-1];
        while(l<r){
            int mid=l+(r-l)/2;
            if(count(a,b,mid)>=k){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        
        vector<vector<int>> ans;
        int target=l;
        
        for(int i=0;i<n;i++){
            int x=target-a[i];
            int idx=search(b,x);
            if(idx!=-1){
                for(int j=0;j<=idx;j++){
                    ans.push_back({a[i],b[j]});
                }
            }
        }
        sort(ans.begin(),ans.end(),compare);
        if(ans.size()>k) ans.erase(ans.begin()+k,ans.end()); 
        return ans;  
    }
};