class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
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