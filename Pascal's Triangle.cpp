//#118 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);    //create 2d vector with numRows rows

        for(int i=0; i<numRows; i++){   //loop through rows
            pascal[i] = vector <int> (i+1, 1);      //create the inner vector of the size i+1 and initialize them all to 1
            for(int k=1; k<i; k++){     //loop through inner values (not first or last) first two rows get skipped because they only contain ones
                pascal[i][k] = pascal[i-1][k-1] + pascal[i-1][k];   //add the the two places above
            }
        }

        return pascal;
    }
};