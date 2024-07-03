#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
// Use the __attribute__ to set optimization flags for this function
class Solution {
public:
    __attribute__((optimize("O3"))) 
    inline std::vector<int> twoSum(const std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mpp;
        mpp.reserve(nums.size());  // Reserve space to avoid rehashing

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            int moreNeeded = target - num;
            auto it = mpp.find(moreNeeded);
            if (it != mpp.end()) {
                return {it->second, i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};

// Use #pragma to set optimization level for this file or function
#pragma GCC optimize("O3")
#pragma GCC target("avx2") // Example for enabling specific CPU instructions

int main() {
    Solution solution;
    std::vector<int> nums = {3,2,4};
    int target = 6;
    std::vector<int> result = solution.twoSum(nums, target);
    for (int index : result) {

        std::cout << index << " ";
    }
    return 0;
}


// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// class Solution {
// public:
//     __attribute__((optimize("O3"))) 
//    inline vector<int> twoSum(vector<int>& nums, int target) {
//         std::unordered_map<long long, int> mpp;            

//         for(int i = 0; i < nums.size(); i++){
//             int num = nums[i];
//             int moreNeeded = target - num;
//             if(mpp.find(moreNeeded) != mpp.end()){
//                 return {mpp[moreNeeded], i};
//             }
//             mpp[nums[i]] = i;
//         }
//         return {-1, -1};
//     }
// };