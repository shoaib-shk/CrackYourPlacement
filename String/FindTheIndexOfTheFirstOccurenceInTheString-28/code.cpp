class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // If needle is empty, return 0
        int n = haystack.length();
        int m = needle.length();
        
        if (n < m) return -1; // If haystack is shorter than needle, return -1
        
        for (int j = 0; j <= n - m; j++) {
            int i = 0;
            while (i < m && haystack[j + i] == needle[i]) {
                i++;
            }
            if (i == m) {
                return j; // Found the needle
            }
        }

        return -1; // Needle not found
    }
};
