class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> mpp;
        int sum = 0;
        int count = 0;
        mpp[0] = 1;
    //brute and better uses N^3 and N^2 
        for(const auto& ae: nums){
            sum += ae;
            count += mpp[sum - k];
            mpp[sum]++;
        }
        return count;
    }
};