//30 Day Leetcoding Challenge
//April 1, 2020
//Language: C++
//Accepted

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size();   //get length of vector
        bool copy;

        for(int i=0; i<length; i++){    //iterates through vector    
            copy = false;

            for(int k=0; k<=i-1; k++){  //checks all numbers before the current one
                if(nums[i]==nums[k]){   //if there is a match, then there is at least 2, so we know that's not the answer
                    copy = true;
                    break;
                }
            }

            for(int k=i+1; k<length; k++){  //check all numbers after the current one
                if(nums[i]==nums[k]){
                    copy = true;
                    break;
                }
            }

            if(!copy)       //if no match was found, there is only one occurance of that digit
                return nums[i];
        }

    return 0;   //this never executes because the input always has a digit with only one occurance
    }
};