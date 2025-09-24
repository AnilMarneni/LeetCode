class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxim = nums[0], minim = nums[0], ans = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] < 0){
                swap(maxim, minim);
            }
            maxim = max(nums[i], maxim * nums[i]);
            minim = min(nums[i], minim * nums[i]);
            ans = max(ans, maxim);
        } 
        return ans;
    }
};