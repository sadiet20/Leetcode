//#137 Leetcode, Medium
//April 2, 2020
//Language: C++
//Accepted

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length = nums.size();   //number of elements in array
        bool copy;

        for(int i=0; i<length; i++){    //iterate through each element
            copy = false;
            for(int k=0; k<=i-1; k++){  //check all elements before current
                if(nums[i]==nums[k]){   //if find a match, current is not a single number
                    copy = true;
                    break;
                }
            }
            for(int k=i+1; k<length; k++){  //check all elements after current
                if(nums[i]==nums[k]){
                    copy = true;
                    break;
                }
            }
            if(!copy)   //if found a number without a copy then it's a single number
                return nums[i];
        }

    return 0;      //this will never execute because all testcases include a single number
    }
};