class Solution:
    def getSecondLargest(self, arr):
        if len(arr)<2:
            return -1
        largest = secondLargest = -1
        for i in arr:
            if i > largest:
                secondlargest = largest
                largest = i
                
            elif i < largest and i > secondLargest:
                secondLargest = i
                
        return secondLargest