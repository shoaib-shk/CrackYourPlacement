class Solution:
	def pushZerosToEnd(self,arr):
	    left = 0
	    for i in range(len(arr)):
	        if arr[i] != 0:
	            temp = arr[i]
	            arr[i] = arr[left]
	            arr[left] = temp
	            left +=1