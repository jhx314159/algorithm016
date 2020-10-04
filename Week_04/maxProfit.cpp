class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(!prices.empty())
      {
        int price = prices.at(0);
        int profit = 0;
        for(int i = 0; i < prices.size(); ++i)
        {
          if(price < prices.at(i))
          {
            profit += (prices.at(i) - price);
          }
        
          price = prices.at(i);
        }

        return profit;
      }
      else
      {
        return 0;
      }
    }
};