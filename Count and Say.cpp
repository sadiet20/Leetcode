//#38 Leetcode, Easy
//March 22, 2020
//Language: C++
//Accepted

class Solution {
public:
    string countAndSay(int n) {
        if(n==1)        //base case
            return "1";

        string s = countAndSay(n-1);        //recursive call 
        int size = s.length();
        string s2;
        
        char x = s[0];      //set previous character and number of occurances of that character
        int found = 1;

        for(int i=1; i<size; i++){
            
            if(s[i]==x)     //if it matches the previous character, keep adding to the number found
                found++;
            
            else{
                s2 += to_string(found);     //record number of that character found
                s2 += s[i-1];

                found = 1;      //reset found and previous character
                x = s[i];
            }
        }
        
        s2 += to_string(found);     //record the number of ocurrances of the last character
        s2 += s[size-1];
        
        return s2;
    }
};