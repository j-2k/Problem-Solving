class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> grp;

        for(string s : strs)
        {
            string normString = s;
            sort(s.begin(), s.end());
            //use the sorted string as a key
            //all same strs that share the same key will just add onto the list (second vector)
            map[s].push_back(normString);
        }

        //for every pair in the map just add the list of strings of map to the list
        //that needs a list of strs
        for(pair s : map)
        {
            grp.push_back(s.second);
        }

        return grp;
    }
};