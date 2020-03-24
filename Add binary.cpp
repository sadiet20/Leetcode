//#67 Leetcode, Easy
//March 23, 2020
//Language: C++
//Accepted

class Solution {
public:
    string addBinary(string a, string b) {
        int lengtha = a.length();       //get lengths of strings
        int lengthb = b. length();
        
        string sum = "";
        bool carry = false;
        
        if(lengtha<=lengthb){
            for(int i=0; i<lengtha; i++){       //iterate through smaller string first
                if(!carry){     //if there is no value carried over from previous indexes (carry the 1)
                    if(a[lengtha-1-i]=='1' && b[lengthb-1-i]=='1'){     //if they're both 1's put in zero as placeholder and set carry to true
                        sum = '0' + sum;
                        carry = true;
                    }
                    else if(a[lengtha-1-i]=='0' && b[lengthb-1-i]=='0')     //if there are two zeros
                        sum = '0' + sum;
                    else
                        sum = '1' + sum;       //if there is one 1 and one 0
                }
                else{       //if there is a 1 carried over
                    if(a[lengtha-1-i]=='1' && b[lengthb-1-i]=='1')      //if both 1's place a one and keep carry set as true
                        sum = '1' + sum;
                    else if(a[lengtha-1-i]=='0' && b[lengthb-1-i]=='0'){    //if both 0's place the carried 1 and set carry to false
                        sum = '1' + sum;
                        carry = false;
                    }
                    else
                        sum = '0' + sum;       //if there is a 1 and a 0 the place a 1 and keep carry set as true
                }
            }
            
            for(int i=lengthb-lengtha-1; i>=0; i--){        //iterate backwards through the rest of the larger string
                if(!carry)
                    sum = b[i] + sum;       //if there is no value carried, just place the values of the larger string
                else{
                    if(b[i]=='1')       //if there's a 1, place a 0 and keep carry set as true
                        sum = '0' + sum;
                    else{       //if theres a 0, place the carried 1 and set carry to false
                        carry = false;
                        sum = '1' + sum;
                    }
                }
            }
        }
        else{       //do the same things but opposite if string a is longer than string b
            for(int i=0; i<lengthb; i++){
                if(!carry){
                    if(a[lengtha-1-i]=='1' && b[lengthb-1-i]=='1'){
                        sum = '0' + sum;
                        carry = true;
                    }
                    else if(a[lengtha-1-i]=='0' && b[lengthb-1-i]=='0')
                        sum = '0' + sum;
                    else
                        sum = '1' + sum;
                }
                
                else{
                    if(a[lengtha-1-i]=='1' && b[lengthb-1-i]=='1')
                        sum = '1' + sum;
                    else if(a[lengtha-1-i]=='0' && b[lengthb-1-i]=='0'){
                        sum = '1' + sum;
                        carry = false;
                    }
                    else
                        sum = '0' + sum;
                }
            }
            
            for(int i=lengtha-lengthb-1; i>=0; i--){
                if(!carry)
                    sum = a[i] + sum;
                else{
                    if(a[i]=='1')
                        sum = '0' + sum;
                    else{
                        carry = false;
                        sum = '1' + sum;
                    }
                }
            }
        }
        
        if(carry)       //if at the end there is still a carried value, add it
            sum = '1' + sum;
        
        return sum;
    }
};