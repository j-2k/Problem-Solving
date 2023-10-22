class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> freq;
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto n : nums)
        {
            map[n]++;
        }
        for(pair p : map)
        {
            bucket[p.second].push_back(p.first);
        }
        
        for (int i = bucket.size() - 1; i >= 0 && freq.size() < k; --i)
        {
            for (int num : bucket[i])
            {
                freq.push_back(num);
                if (freq.size() == k)
                    break;
            }
        }
        return freq;
    }
};