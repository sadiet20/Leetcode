//#1184 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int path1 = 0, path2 = 0;   //initalize both paths to be zero
        int total = distance.size();    //number of roads
        
        int i = start;  //start at the starting position (road is between start and start + 1)
        while(i!=destination){  //loop until we get to the destination
            if(i>=total){   //if get to the end of the loop, start back at zero
                i=0;
                if(i==destination)  //check if this is the destination
                    break;
            }
            path1 += distance[i];   //add the distance along that road
            i++;    //increment location
        }
        
        i = start - 1;  //start at the starting positon - 1 (road between start and start - 1)
        while(i!=destination){  //loop until we get to the destination
            if(i<0){
                i=total-1;     //loop over to the end of the vector
                if(i==destination)  //check if this is the destination
                    break;
            }
            path2 += distance[i];   //add distance along that road
            i--;    //decrement location
        }
        path2 += distance[i];   //since this path is backwards, must add in one more distance

        return min(path1, path2);   //return the shorter path
    }
};