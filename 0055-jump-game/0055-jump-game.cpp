class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_Index = 0;
        for (int i = 0; i <= nums.size()- 1; i++) {
            if (i > max_Index) {
                return false;
            }
            max_Index = max(max_Index, i + nums[i]);
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna