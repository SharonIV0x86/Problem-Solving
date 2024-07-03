class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        for(int fast = 1; fast < nums.size(); fast++){
            if(nums[fast] != nums[slow]){
                std::swap(nums[fast], nums[slow+1]);
                slow++;
            }
        }
        return slow + 1;
    }
};