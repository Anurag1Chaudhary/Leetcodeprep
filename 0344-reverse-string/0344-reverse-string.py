class Solution:
    def reverseString(self, s: List[str]) -> None:
        t=0
        n=len(s)-1
        while(t<n):
            s[t],s[n]=s[n],s[t]
            t=t+1
            n=n-1
            
        return s