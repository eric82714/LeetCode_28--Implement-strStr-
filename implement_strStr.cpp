class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        
        string tmp(needle);
        
        for(int i = 0; i < haystack.size(); i++){           
            if(haystack[i] == needle[0] && i+needle.size() <= haystack.size()) {
                for(int j = 0; j < needle.size(); j++) tmp[j] = haystack[i+j];
                if(needle == tmp) return i;
            }
        }
        return -1;
    }
};
