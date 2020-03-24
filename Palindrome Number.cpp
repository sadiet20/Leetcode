//#9 Leetcode, Easy
//February 22, 2020
//Language: C++
//Accepted

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);    //convert integer to string
        int length = str.length();
        for(int i = 0; i < length/2; i++){     //integer division so it compares pairs (if odd length don't need to check middle number)
            if(str[i]!=str[length-1-i])
                return false;
        }
        return true;
    }
};