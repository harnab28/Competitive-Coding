#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long int sum = 0, min = prices[0] , max = prices[0];

        for (int i = 1; i < prices.size() - 1; i++)
        {

            if(prices[i] >= max)
                max = prices[i];
            else
            {
                sum += (max - min);
                min = prices[i];
                max = min;
            }

        }
        
        sum += (max - min);

        return sum;
    }
};