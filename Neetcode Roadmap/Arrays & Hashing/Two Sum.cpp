class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;//build map
        }

        for(int i = 0; i < nums.size(); i++)
        {
            int leftover = target - nums[i];
            if(map.count(leftover) && map[leftover] != i)
            {
                return {i , map[leftover]};
            }

        }


        return {};
    }
};