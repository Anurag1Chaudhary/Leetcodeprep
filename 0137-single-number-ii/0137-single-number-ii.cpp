class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long x=1L<<31,ans=0;
        for(int i=31;i>=0;i--)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(x&nums[j]) count++;
                
            }
            if((count%3)!=0) ans+= x;;
            x=x>>1;
        }
        return ans;
    }
};