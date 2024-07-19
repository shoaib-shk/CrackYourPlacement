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

/* Best Approach: 0 ms

int init = [] {
	cin.tie(nullptr)->sync_with_stdio(false);
    freopen("user.out", "w", stdout);

    for (string s; getline(cin, s);) {
        int solution = 0, minPrice = INT_MAX;
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            int price = s[_i++] & 15;
            while ((s[_i] & 15) < 10) price = price * 10 + (s[_i++] & 15);
            minPrice = min(minPrice, price);
            solution = max(solution, price - minPrice);
        }
cout << solution << '\n';    }
    return 0;
}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0,min=100000;
        for(int i=0;i<prices.size();i++)
        {
           if(prices[i]<min)
           min=prices[i];

           if(prices[i]-min>max)
           max=prices[i]-min;
        }
        return max;
    }
};


*/

/*
Using sliding window approach (JUST FOR UNDERSTANDING - WILL GIVE TLE)

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
