class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        for (int i = 0; i <= farthest; ++i) 
        {
            farthest = max(farthest, i + nums[i]);
            if (farthest >= nums.size() - 1) return true;
        }
        return false;
    }
};