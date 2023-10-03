class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i<j && nums[i]==nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};