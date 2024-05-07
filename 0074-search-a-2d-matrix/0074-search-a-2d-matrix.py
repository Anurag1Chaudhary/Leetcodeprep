class Solution(object):
    def searchMatrix(self, matrix, target):
        n=len(matrix)
        m=len(matrix[0])
        low=0;
        high=(n*m-1)
        while(low<=high):
            mid=(low+high)/2
            row=mid//m
            col=mid%m
            if(matrix[row][col]==target):
                return True
            if(matrix[row][col]<target):
                low=mid+1
            if(matrix[row][col]>target):
                high=mid-1
        return False
        