class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int beg=0;
        int end=n-1;
        int mid=0;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            if(target==nums[mid])
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
     return end+1;
    }
};