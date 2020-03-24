//#13 Leetcode, Easy
//February 29, 2020
//Language: C++
//Accepted

class Solution {
public:
    int romanToInt(string s) {
        char symbol[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int value[7] = {1, 5, 10, 50, 100, 500, 1000};
        int length = s.length();
        int sum = 0;

        for(int i=0; i<length; i++){        //iterate through string
            for(int k=0; k<7; k++){
                if(s[i]==symbol[k]){        //iterate through symbol array until find the one it matches
                    if(i<(length-1) && k<6){        //if there is a character after the current one (won't index out of range)
                        if(s[i+1]==symbol[k+1]){        //if following character equals the following symbol
                            sum+=value[k+1]-value[k];       //subtract the value of smaller from value of bigger
                            i++;        //skip the next character because we already matched it 
                            break;      //break inner loop
                        }
                        if(k<5){        //makes sure won't index out of range
                            if(s[i+1]==symbol[k+2]){        //if next character matches the symbol two away
                                sum+=value[k+2] - value[k];
                                i++;
                                break;
                            }
                                
                        }
                    }
                    sum+=value[k];      //if no fancy things, just add that one
                }
            }    
        }
        return sum;
    }
};