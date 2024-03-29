class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        long x=1L<<31;
        while(x)
        {
            if(x&n) count++;
            x>>=1;
        }
        return count;
    }
};