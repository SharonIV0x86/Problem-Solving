class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       if(n==0) return 0;
       int longest = 1;
       std::unordered_set<int> st;
       for(int i = 0; i < n; i++)
        st.insert(nums[i]);

       for(auto ae: st){
        if(st.find(ae - 1) == st.end()){
            int cnt = 1;
            int elem = ae;
            while(st.find(ae + 1) != st.end()){
                cnt++;
                elem++;
            }
            longest = std::max(longest, cnt);
        }
       }
        return longest;
    }
};//does not works on leetcode, gives TLE

//failed approach!
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         if (n==0) return 0;
//         int longest = 1;
//         std::unordered_set<int> st;
//         for(int i = 0; i < n; i++)
//             st.insert(nums[i]);

//         for(const auto& ae : st){
//             int count = 1;
//             int elem = ae;
//             int breakPoint = -1;
//             while(st.find(ae - 1) == st.end()){
//                 breakPoint = ae;
//             }
//             if(breakPoint == -1){
//                 breakPoint = elem;
//             }
//             while(st.find(breakPoint + 1) != st.end()){
//                 breakPoint++;
//                 count++;
//             }
//             longest = std::max(count, longest);
//         }
//         return longest;
//     }
// };