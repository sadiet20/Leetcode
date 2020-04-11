//#70 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    int climbStairs(int n) {
        int sum;
        int previous1 = 2;
        int previous2 = 1;
        if(n==1)    //base cases
            return 1;
        if(n==2)
            return 2;
        for(int i=3; i<=n; i++){        //iterative fibonacci sequence (recursive took too long)
            sum = previous1 + previous2;    //add the previous two (sum is the value of current)
            previous2 = previous1;      //reset the previous variables
            previous1 = sum;
        }
        return sum;
    }
};