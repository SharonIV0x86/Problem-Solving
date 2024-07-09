//very intutive thought process from striver
// solution: https://leetcode.com/problems/next-permutation/solutions/3473399/beats-100-full-explanation-in-steps/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();
        for(int i = n- 2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        
        if(index == -1){
            std::reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n-1; i > index; i--){
            if(nums[i] > nums[index]){
                std::swap(nums[i], nums[index]);
                break;
            }
        }
        std::reverse(nums.begin() + index + 1, nums.end());
    }
};