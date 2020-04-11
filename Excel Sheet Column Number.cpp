//#171 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        int length = s.length();
        for(int i=0; i<length; i++){
            sum += pow(26, i)*(s[length-1-i] - 64); //add 26 to the power of the current place (ones, tens, etc) 
                                                    //times the numerical value of that letter
        }
        return sum;
    }
};