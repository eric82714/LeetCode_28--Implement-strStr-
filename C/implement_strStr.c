#include <string.h>

int strStr(char * haystack, char * needle){
    if(strcmp(needle, "") == 0) return 0;
    
    int tmp;
    
    for(int i = 0; i < strlen(haystack); i++){
        if(haystack[i] == needle[0] && i+strlen(needle) <= strlen(haystack)){
            tmp = 0;
            for(int j = 0; j < strlen(needle); j++){                
                if(needle[j] == haystack[i+j]) tmp++;
                else break;
            }
            if(tmp == strlen(needle)) return i;
        }
    }
    return -1;
}
