class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=prices[0];
        int maxProf=0;
        for (int& p : prices)
        {
            int profit=p-minP;
            maxProf=std::max(profit,maxProf);
            minP=std::min(minP,p);            
        }
        return maxProf;
    }
};
