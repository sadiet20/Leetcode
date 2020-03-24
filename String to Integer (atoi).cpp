//#8 Leetcode, Medium
//February 22, 2020
//Language: C++
//Accepted

class Solution {
public:
    int myAtoi(string str) {
        int length = str.length();
        int mult = 1;
        int start = 0;
        
        while(str[start]==' '){    //finds first non-space character
            start++;
            if(start==length)      //if the string is only spaces return 0
                return 0;
        }
        
        if(str[start]>='0' && str[start]<='9')    //if first character after space is a number
            start = start;              //don't change starting position
        else if(str[start]=='-' || str[start]=='+'){
            if(str[start]=='-')         //multiply by -1 in the end
                mult = -1;
            if((start+1)<=length){     //makes sure there's another character after sign (so that we don't index out of range)
                if(str[start+1]>='0' && str[start+1]<='9')
                    start++;         //index where numbers start (after sign)
                else
                    return 0;    //sign not followed by a number
            }
                
            else
                return 0;       //no numbers in str
        }
        else
            return 0;      //char following whitespace is not +, -, or num

        int place = 0;
        long long num = 0;   //use long long so that we can catch overflows safely
        int numlength = 0;
        string numstr;
        bool overflow = false;
        
        for(int i=start; i<(length); i++){    //create substring with only numbers
            if(str[i]>='0'&&str[i]<='9'){
                numstr+=str[i];       
                numlength++;
            }
            else
                break;
        }

        for(int i=(numlength-1); i>=0; i--, place++){
            num += (numstr[i]-48)*pow(10, place);     //adds number at each placeholder (ones, tens, hundreds, etc.)
            if((num*mult)>INT_MAX || (num*mult)<INT_MIN){      //if it would be out of range for an integer, break loop
                overflow = true;
                break;
            }
        }
        
        if(overflow){
            if(mult==1)        //if it would have overflown, return either INT_MAX or INT_MIN based on sign of multiplier
                return INT_MAX;
            return INT_MIN;
        }
        
        num*=mult;
        return (int) num;   //if not overflow, return int conversion of num
    }
};