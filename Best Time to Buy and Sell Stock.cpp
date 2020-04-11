//#121 Leetcode, Easy
//April 11, 2020
//Language: C++
//Accepted
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;     //profit for doing nothing is zero
        int length = prices.size();
        for(int i=0; i<length; i++){    //iterate through each element
            for(int k=i+1; k<length; k++){      //iterate through each element after
                if(prices[k]-prices[i]>profit)  //if buy and sell at this combination gives more profit and before, update profit
                    profit = prices[k]-prices[i];
            }
        }
        return profit;
    }
};