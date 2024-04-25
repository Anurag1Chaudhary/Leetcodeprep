class Solution(object):
    def minDistance(self, word1, word2):
        dp=[[-1]*len(word2) for i in range(len(word1))]
        def imao(i,j):
            if i==-1:
                return j+1;
            elif j==-1:
                return i+1;
            if dp[i][j]!=-1:
                return dp[i][j]
            elif word1[i]==word2[j]:
                dp[i][j]=imao(i-1,j-1)
            else:
                dp[i][j]=1+min(imao(i-1,j-1),imao(i,j-1),imao(i-1,j))
            return dp[i][j]
        return imao(len(word1)-1,len(word2)-1)