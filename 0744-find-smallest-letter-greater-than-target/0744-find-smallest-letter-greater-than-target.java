class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
       int n = letters.length;
        int ans =0;
        if(target > letters[n-1] || target<letters[0]){
            return letters[0];
        }
        
        int low =0;
        int high = n-1;
        while(low <=high){
            int mid = low + (high-low)/2;
            if(letters[mid] <=target){
                low++;
            }else{
                ans = mid;
                high--;
                
            }
        }
        return letters[ans];
    }}