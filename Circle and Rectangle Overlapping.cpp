//#1401 Leetcode, Medium
//April 4, 2020
//Language: C++
//Accepted
class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        
        if((x_center+radius) >= x1 && (x_center-radius) <= x2 && y_center >= y1 && y_center <= y2)  //check horizontal
            return true;
        
        if((y_center+radius) >= y1 && (y_center-radius) <= y2 && x_center >= x1 && x_center <= x2)  //check vertical
            return true;
        
        if(sqrt(pow(x1-x_center, 2) + pow(y1-y_center, 2)) <= radius)   //check bottom left corner
            return true;
        
        if(sqrt(pow(x1-x_center, 2) + pow(y2-y_center, 2)) <= radius)   //check top left corner
            return true;
        
        if(sqrt(pow(x2-x_center, 2) + pow(y1-y_center, 2)) <= radius)   //check bottom right corner
            return true;
        
        if(sqrt(pow(x2-x_center, 2) + pow(y2-y_center, 2)) <= radius)   //check top right corner
            return true;

        
        return false;   //if none were true, then they are not overlapped

    }
};