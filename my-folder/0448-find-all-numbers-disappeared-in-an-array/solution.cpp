class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> v;
        for(int i=1; i<=nums.size(); i++) {
            auto it = s.find(i);
            if(it != s.end()) {
                continue;
            } else {
                v.push_back(i);
            }
        }
        return v;
    }
};
