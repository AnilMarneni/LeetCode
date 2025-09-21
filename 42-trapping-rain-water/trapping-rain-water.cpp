class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        leftMax[0] = height[0];
        rightMax[0] = height[n - 1];

        for(int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i - 1], height[i - 1]);
        }
        for(int i = n - 2; i >= 0; i--){
            rightMax[i] = max(rightMax[i + 1], height[i + 1]);
        }

        int totalWater = 0;
        for(int i = 0; i < n; i++){
            int curWater = min(leftMax[i], rightMax[i]) - height[i];
            if(curWater > 0){
                totalWater += curWater;
            }
        }

        return totalWater;
    }
};