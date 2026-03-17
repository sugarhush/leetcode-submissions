class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> map;
        int complement, index, cindex;
        for(int i=0; i<nums.size(); i++) {
            complement = target - nums[i];
            if(map.contains(complement)) {
                index = map[complement];
                cindex = i;
                break;
            } else {
                map[nums[i]] = i;
            }
        }
        return {index, cindex};
    }
};
