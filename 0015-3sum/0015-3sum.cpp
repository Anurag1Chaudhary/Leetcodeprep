class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            
            int low = i + 1;
            int high = n - 1;
            
            while (low < high) {
                int curr = nums[i] + nums[low] + nums[high];
                if (curr == 0) {
                    // Found a triplet that adds up to 0
                    result.push_back({nums[i], nums[low], nums[high]});
                    
                    // Skip duplicates
                    while (low < high && nums[low] == nums[low + 1])
                        low++;
                    while (low < high && nums[high] == nums[high - 1])
                        high--;
                    
                    // Move to the next unique pair
                    low++;
                    high--;
                } else if (curr < 0) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        
        return result;
    }
};
