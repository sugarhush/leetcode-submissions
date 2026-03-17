class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int n = 0;
        for(int i=0; i<nums.size(); i++) {
            int num = nums[i];
            for(int j=0; j<nums.size(); j++) {
                if((i!=j) && (num > nums[j])) {
                    n ++;
                }
            }
            v.push_back(n);
            n=0;
        }
        return v;
    }
};
