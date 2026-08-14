class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof = 0;

        for(int i = 0;i<prices.size();i++)
        {
            
            for(int j =i;j<prices.size();j++)
            {
                int curr_prof = prices[j] - prices[i];

                max_prof = max(curr_prof,max_prof);

            }
        }
        return max_prof;
    }
};
