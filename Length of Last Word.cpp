//#58 Leetcode, Easy
//March 21, 2020
//Language: C++
//Accepted

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int count = 0;
        bool space = true;
        
        for(int i=0; i<length; i++){
            if(s[i]==' '){
                space = true;   //words are ofsetted by space, so must keep track of if a space was recent
            }
            else{
                if(space){      //if this is a new word, reset everything
                    space = false;
                    count = 0;
                }
                count++;    //add to the length
            }
        }
        return count;
    }
};