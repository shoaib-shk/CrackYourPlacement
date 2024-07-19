class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            if(prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};


/*
Using sliding window approach (JUST FOR UNDERSTANDING Sliding Window approach for this problem :- WILL GIVE TLE)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int days = 0;
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            for(int j = i+1;j<prices.size();j++){
                if(prices[j]-prices[i]>profit){
                    profit = prices[j]-prices[i];
                }
            }
        }
        return profit;
    }
};*/
