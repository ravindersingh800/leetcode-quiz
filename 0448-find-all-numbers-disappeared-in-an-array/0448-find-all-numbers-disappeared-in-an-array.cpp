class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    set<int> s;
    vector<int> ans;

    for (auto x : nums) {
        s.insert(x);
    }

    for (int i = 1; i <= n; i++) {
        if (s.find(i) == s.end()) {
            ans.push_back(i);
        }
    }

    return ans;

        return ans;
    
    }
};