//30 Day Leetcoding Challenge
//April 2, 2020
//Language: C++
//Accepted

class Solution {
public:
    bool isHappy(int n) {
        string num;
        int length, temp;
        int count = 0, sum = 0;
        
        num = to_string(n);     //convert to string so we can parse through it
        
        while(sum!=1){      //if sum==1, then it's a happy number
            sum = 0;
            length = num.length();

            for(int i=0; i<length; i++){    //iterate though each number
                temp = num[i] - '0';        //convert from character into integer by using ascii
                sum += temp*temp;       //square and add to sum
            }

            num = to_string(sum);   //reset num to be the sum
            count++;
            if(count==500)      //if we do this 500 times w/o discovering it's a happy number, then its probably not a happy number
                return false;
        }
        return true;
    }
};