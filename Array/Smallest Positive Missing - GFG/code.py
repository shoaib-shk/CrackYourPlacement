class Solution:
    
    def missingNumber(self,arr):
        #Your code here
        arr.sort()
        num = 1
        for i in range (len(arr)):
            if arr[i] == num:
                num += 1
            if arr[i] > num:
                break
            
        return num