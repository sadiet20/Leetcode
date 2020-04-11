//#119 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal(rowIndex+1);     //create 2d vector with rowIndex+1 rows
        
        for(int i=0; i<(rowIndex+1); i++){      //loop through rows
            pascal[i] = vector <int> (i+1, 1);      //create inner vector of size i+1 and initialize all values to one
            for(int k=1; k<i; k++){     //loop through all inner values (not first or last element)
                pascal[i][k] = pascal[i-1][k-1] + pascal[i-1][k];   //add the places above
            }
        }
        return pascal[rowIndex];      //return the requested row
    }
};