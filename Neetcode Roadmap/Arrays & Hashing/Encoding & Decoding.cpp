//Hmm the difference between my solution & the one shown is that they directly change the string
//referenced which is something I probably shouldve done? idk, but here is my doodoo solution :D

class Solution {
public:

    int maxSize = 0;
    vector<int> encVec;

    string encode(vector<string>& strs) {
        vector<string>::iterator it;
        string s;
        maxSize = strs.size();
        int strL[maxSize];
        for(int i = 0; i < strs.size(); ++i){
            s += strs[i];
            strL[i] = strs[i].length();
            encVec.push_back(strL[i]);
        }

        for(auto i : strL){
            cout << i << endl;
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> vec;
        int prev = 0;
        for(int i = 0; i < maxSize; i++)
        {
            string cutStr = s.substr(prev,encVec[i]);
            vec.push_back(cutStr);
            prev += encVec[i];
        }
        return vec;
    }
};
