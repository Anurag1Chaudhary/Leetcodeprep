class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle = 2*n - 2;
        int modTime = time%cycle;
        if (modTime < n) {
            return modTime + 1; 
        } else {
            return 2 * n - modTime - 1;  
        }
    }
};