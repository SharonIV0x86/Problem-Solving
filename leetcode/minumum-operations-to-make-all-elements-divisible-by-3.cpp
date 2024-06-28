class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                c+= 1;
            }
            else if(nums[i] % 3 != 0){
                int rem = nums[i] % 3;
                if((nums[i] + rem) % 3 == 0){
                    c += rem;
                }else if((nums[i] - rem) % 3 == 0){
                    c += 1;
                }else{
                    c += 3 - rem;
                }
            }
        }
        return c;
    }
};