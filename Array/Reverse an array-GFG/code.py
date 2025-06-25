class Solution:
    def reverseArray(self, arr):
        # code here
        l = len(arr)
        for i in range(len(arr)//2):
            arr[i], arr[(l-i-1)] = arr[(l-i-1)], arr[i] 