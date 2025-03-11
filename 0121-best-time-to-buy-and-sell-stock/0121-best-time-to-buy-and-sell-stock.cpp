class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min=INT_MAX;
        int max_prof=0;
        for(int i=0;i<n;i++){
           if(prices[i]<min){
            min=prices[i];
           }
           else if(prices[i]-min>max_prof)
           max_prof=prices[i]-min;
        }
        return max_prof;
        
    }
};