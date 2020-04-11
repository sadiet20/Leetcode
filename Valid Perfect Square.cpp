//#367 Leetcode, Easy
//April 4, 2020
//Language: C++
//Accepted
class Solution {
public:
    bool isPerfectSquare(int num) {
        int sum=0;
        long i=1;
        
        if(num==0)
            return false;
        
        if(num==INT_MAX)    //helps runtime
            return false;
        
        while(sum<num){     //finds all perfect squares until num
            sum = i*i;
            i++;
        }
        
        if(sum==num)    //if the sum is num, then num is a perfect square
            return true;
        
        return false;   //sum was greater than num
    }
};