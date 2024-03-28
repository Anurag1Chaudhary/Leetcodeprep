class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        int beg =-1;
        unordered_map<int,int>freq;
        for(int end=0;end<nums.size();end++)
        {
            freq[nums[end]]++;
            while(freq[nums[end]]>k)
            {
                beg++;
                freq[nums[beg]]--;
            }
            ans=max(ans,end-beg);
        }
        return ans;
    }
};