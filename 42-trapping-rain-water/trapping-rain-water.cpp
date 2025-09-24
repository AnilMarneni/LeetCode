class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lMax = height[0], rMax = height[n - 1], low = 1, high = n - 2;
        int ans = 0;
        while(low <= high){
            lMax = max(lMax, height[low]);
            rMax = max(rMax, height[high]);

            if(lMax < rMax){
                ans += (lMax - height[low]);
                low++;
            } else{
                ans += (rMax - height[high]);
                high--;
            }
        }
        return ans;
    }
};