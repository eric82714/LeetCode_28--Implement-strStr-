class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle: return 0
        
        n_len = len(needle)
        
        for i in range(len(haystack)):
            if haystack[i] == needle[0] and (i+n_len <= len(haystack) and haystack[i:i+n_len] == needle): 
                return i
        return -1
