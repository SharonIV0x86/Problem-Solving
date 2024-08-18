#define r return
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        int mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target)
                r mid;
            else if(nums[mid] < target)
                low = mid+1;
            else
                high = mid-1;
        }
        r -1;
    }
};