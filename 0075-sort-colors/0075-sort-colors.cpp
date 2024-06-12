class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo =0;
        int hi = nums.size() -1;
        int mid = 0;
        
        while(mid<= hi)
        {
            switch(nums[mid])
            {
//if the element is 0
                case 0:
                    swap(nums[lo++], nums[mid++]);
                    break;
                    //if the element is 1.
                case 1 :
                    mid++;
                    break;
                    //if the element is 2
                case 2 :
                    swap(nums[mid], nums[hi--]);
                    break;
                    
            }
        }
        
    }
};