class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<long long, int>mpp;
        int n = nums.size();
        int num = 0;
        for(int i = 0; i < n; i++)
            mpp[nums[i]]++;

        for(const auto &ae: mpp){
            if(ae.second > (n/2)){
                num = ae.first;
            }
        }
        return num;
    }
};