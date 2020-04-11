//#66 Leetcode, Easy
//April 4, 2020
//Language: C++
//Accepted
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size();
        for(int i=length-1; i>=0; i--){ //breaks loop if all of the digits are nines
            if(digits[i]==9)    //if digit is a nine, we must carry the one to the next digit
                digits[i]=0;
            else{
                digits[i]++;    //if not a nine, we can place the one there and return
                return digits;
            }
        }
        vector <int> added(length+1, 1);    //vector size one larger than the other one
        for(int i=1; i<length+1; i++)
            added[i] = 0;       //the first element is one and the rest are zeros
        return added;
    }
};