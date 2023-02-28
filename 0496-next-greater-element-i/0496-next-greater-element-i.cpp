class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        int n= nums2.size(), m=nums1.size();
        st.push(nums2[n-1]);
        for(int i=n-2; i>=0; i--){
           while(!st.empty() && st.top()<=nums2[i]){
               st.pop();
           }
            if(!st.empty()){
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int>res (m,-1);
        for(int i=0; i<m; i++){
            if(mp[nums1[i]]!=0)
                res[i]=mp[nums1[i]];
            
        }
        return res;
    }
};