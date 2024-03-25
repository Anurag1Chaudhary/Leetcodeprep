class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    unordered_map<int, int> mp;
    int n = nums.size();

    // Count the occurrences of each element in the vector and store in the map
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
    }

    vector<int> ans;

    // Find the duplicate elements and add them to the answer vector
    for (auto& x : mp) {
        if (x.second == 2) {
            ans.push_back(x.first);
        }
    }

    return ans;
    }
 
};