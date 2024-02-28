class Solution {
public:
    int search(vector<int>& n, int target) {
        std::sort(n.begin(), n.end());



        int indexLeft = 0;
        int indexRight = n.size()-1;
        
        while(indexLeft <= indexRight)
        {
            int ci = indexLeft + (indexRight - indexLeft)/2;//(indexLeft + (indexRight - indexLeft))/2; my issue was the bigger outside brackets!!

            if (target == n[ci])
            {
                return ci;
            }

            if(target > n[ci])
            {
                indexLeft = ci + 1; 
            }
            else if (target < n[ci])
            {
                indexRight = ci - 1;
            }
        }

        //for(auto& a: n){cout << a << " ";}
        return -1;
    }
};
