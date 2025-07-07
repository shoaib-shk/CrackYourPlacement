class Solution:
    def reverseWords(self, s: str) -> str:
        q = collections.deque()
        start = -1
        i=0
        while i<len(s):
            if s[i] != " ":
                start = i
                while i<len(s) and s[i] != " ":
                    i += 1
                q.appendleft(s[start:i])
                
            i+=1
        return " ".join(q)
