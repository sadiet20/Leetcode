//#125 Leetcode, Easy
//April 4, 2020
//Language: C++
//Accepted
class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.length();
        string n;
        for(int i=0; i<length; i++){    //clean up string
            if(s[i]>='A' && s[i]<= 'Z')     //convert uppercase to lowercase
                s[i] = s[i] + 32;
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))    //get rid of anything other than letters and numbers
                n += s[i];      //add it to a new string
        } 

        length = n.length();    //length of cleaned string
        for(int i=0; i<(length/2); i++)     //integer divison to go through half of the string and compare it to the other half
            if(n[i]!=n[length-1-i])     //if they don't match, not a palindrome
                return false;
        
        return true;    //if all of them matched, then it's a palindrome
    }
};