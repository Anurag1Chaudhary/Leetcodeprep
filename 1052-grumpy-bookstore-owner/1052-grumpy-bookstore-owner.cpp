class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int maxun=0;
        int curun=0;
        for(int i=0;i<minutes;i++)
        {
            curun+=customers[i]*grumpy[i];
        }
        
        maxun=curun;
        int i=0;
        int j=minutes;
        while(j<n)
        {
            curun+=customers[j]*grumpy[j];
            curun-=customers[i]*grumpy[i];
            maxun=max(maxun,curun);
            i++;
            j++;
        }
        int totsat=maxun;
        for(int i=0;i<n;i++)
        {
            totsat+=customers[i]*(1-grumpy[i]);
        }
        return totsat;
    }
};