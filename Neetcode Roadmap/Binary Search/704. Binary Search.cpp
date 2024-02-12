wrong currently...

class Solution {
public:
    int search(vector<int>& n, int target) {
        std::sort(n.begin(), n.end());

        int indexLeft = 0;
        int indexRight = n.size()-1;
       
        
        while(indexLeft <= indexRight)
        {
            cout << indexLeft << indexRight << ci << endl;
            
            ci = (indexLeft + (indexRight-indexLeft))/2;

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