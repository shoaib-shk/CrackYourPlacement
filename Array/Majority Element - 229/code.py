class Solution:
    def majorityElement(self, arr: List[int]) -> List[int]:
        count1, count2 = 0,0
        ele1, ele2 = None, None
        n = len(arr)
        res = []
        for i in range(n):
            if arr[i] == ele1:
                count1 += 1
            elif arr[i] == ele2:
                count2 +=  1
            elif count1 == 0:
                ele1 = arr[i]
                count1 = 1
            elif count2 == 0:
                ele2 = arr[i]
                count2 = 1
            else:
                count1 -= 1
                count2 -= 1
        c1 = arr.count(ele1)
        c2 = arr.count(ele2)
        if c1 > n//3:
            res.append(ele1)
        if ele2 != ele1 and c2 > n//3:
            res.append(ele2)
        return res