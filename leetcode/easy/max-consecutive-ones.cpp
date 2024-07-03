class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                temp++;
            }else{
                count = std::max(temp, count);
                temp = 0;
            }
        }
        count = std::max(temp, count);
        return count;
    }
};