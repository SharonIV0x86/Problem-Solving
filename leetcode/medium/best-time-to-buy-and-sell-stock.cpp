class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int min = prices[0];
        for(int i = 1; i <= n - 1; i++){
            if(profit < (prices[i] - min)){
                profit = prices[i] - min;
            }
            if(prices[i] < min){
                min = prices[i];
            }
            // profit = std::max(profit, prices[i] - min);
            // min = std::min(min, prices[i]);
        }
        return profit;
    }
};



// FAILED APPROACH! PERSONAL
// #include <iostream>
// #include <vector>
// using namespace std;
// int maxProfit(vector<int> &prices)
// {
//     int profit = 0;
//     int slow = 0;
//     int maxProfit = -1;
//     for (int fast = 1; fast < prices.size(); fast++)
//     {
//         if (prices[slow] < prices[fast])
//         {
//             maxProfit = std::max(maxProfit, prices[fast] - prices[slow]);
//             fast++;
//             profit = maxProfit;
//             // slow++;
//         }
//         else
//         {
//             slow++;
//         }
//     }
//     return profit;
// }
// int main(){
//     std::vector<int> inp = {1,2,4};
//     int prof = maxProfit(inp);
//     std::cout << "profit is: " << prof << std::endl;
//     return 0;
// }