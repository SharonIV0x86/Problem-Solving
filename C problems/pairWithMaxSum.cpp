//GFG
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int maxElement = LONG_MAX;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum > maxElement){
                maxElement = sum;
            }if(sum < 0){
                sum = 0;
            }
        }
        return maxElement;
    }
};