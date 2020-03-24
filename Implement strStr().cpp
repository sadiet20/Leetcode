//#28 Leetcode, Easy
//March 21, 2020
//Language: C++
//Accepted

class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeh = haystack.length();
        int sizen = needle.length();
        if(sizen==0)    //nonexistent needle then return zero
            return 0;
        
        if(sizen>sizeh)     //if needle is bigger than haystack then haystack cannot contain it
            return -1;
        
        if(sizeh==sizen){   //shortcut if they're the same length, they must be exactly the same
            if(haystack==needle)
                return 0;
            return -1;
        }
        
        bool found = false;
        
        for(int i=0; i<sizeh; i++){
            if(haystack[i]==needle[0])  //if found the first character of needle
                if((sizeh-i)>=sizen){   //make sure there are enough characters left to contain needle
                    found = true;
                    for(int k=1; k<sizen; k++){     //see if the rest of the needle is found
                        if(needle[k]!=haystack[i+k]){
                            found = false;
                            break;      //leave if one doesn't match
                        }
                    }
                    if(found)   //entire needle is found
                        return i;
                }
                else
                    return -1; 
        }
        
        return -1;
    }
};