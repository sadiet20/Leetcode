//#35 Leetcode, Easy
//March 21, 2020
//Language: C++
//Accepted

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int i;      //declare outside of for loop to be able to use later

        for(i=0; i<size; i++){
            if(nums[i]>=target)     //if found target or found number bigger than target
                return i;
        }
        return i;   //all the numbers in nums are smaller than target (last index)
    }
};