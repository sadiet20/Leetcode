//#260 Leetcode, Medium
//April 2, 2020
//Language: C++
//Accepted

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        bool copy, found = false;
        int first;
        int length = nums.size();   //number of elements in array
            
        for(int i=0; i<length; i++){    //iterate through each value in array
            copy = false;
            for(int k=0; k<=i-1; k++){  //checks all numbers before the current one
                if(nums[i]==nums[k]){   //if there is a match, then that's not a single number
                    copy = true;
                    break;
                }
            }
            for(int k=i+1; k<length; k++){  //checks all numbers after the current one
                if(nums[i]==nums[k]){
                    copy = true;
                    break;
                }
            }
            if(!copy){      //if there was no match (there's only one occurance of that number)
                if(found)   //if we've already found one single number, we're done
                    return {first, nums[i]};
                first = nums[i];    //otherwise, store this number as the first number 
                found = true;
            }
        }
    return {0};     //this will never execute because there is a solution to every testcase
    }
};