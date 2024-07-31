//OPTIMAL
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0,  cnt2 = 0;
        int el1 = INT_MIN;
        std::vector<int> res;
        int n = nums.size();
        int el2 = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--, cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }
        int mini = (int)(n/3) + 1;
        if(cnt1 >= mini) res.push_back(el1);
        if(cnt2 >= mini) res.push_back(el2);
        return res;
    }
};


// BETTER BETTER.
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::vector<int> res;
        std::unordered_map<int, int>mpp;
        int n = nums.size();
        int cc = n/3;
        for(int i = 0; i < n; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == cc + 1){
                res.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        return res;
    }
};

// // BETTER APPROACH
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         std::vector<int> res;
//         std::unordered_map<int, int>mpp;
//         int n = nums.size();
//         int cc = n/3;
//         for(int i = 0; i < n; i++){
//             mpp[nums[i]]++;
//         }
//         for(const auto& [first, second] : mpp){
//             if(second > cc){
//                 res.push_back(first);
//             }
//         }
//         return res;
//     }
// };