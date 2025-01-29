//Not the cleanest solution but works like a charm + I don't cheat ;)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) { return NULL; }
        set<int> hashset(nums.begin(),nums.end());

        int prev = *hashset.begin();
        cout << prev  << " " << nums.size() << endl;

        int seq = 1;
        int h = 1;

        for(int e : hashset){
            if(prev == e-1){
                seq++;
            }
            else{
                if(h<seq) {h = seq;}
                seq = 1;
            }
            prev = e;
        }

        cout << seq << endl;
        cout << h << endl;

        if(h<seq) {h = seq;}

        return h;
    }
};
