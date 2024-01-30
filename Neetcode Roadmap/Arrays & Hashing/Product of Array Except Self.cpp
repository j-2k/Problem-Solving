class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> products(s,1);  //vector with size of nums & holds 1's

        int PR = 1;             //right product "total" 
        for(int r = 0; r < s; r++)
        {
            products[r] = PR;   //set current right prod total & "skip itself"
            PR = PR * nums[r];  //get product of the nums[r] for next iteration
        }

        int PL = 1;             //left product "total"
        for(int l = s - 1; l >= 0; l--)
        {
            products[l] *= PL;  //multiply old prod with new starting from RTL
            PL = PL * nums[l];  //get product of the nums[l] for next iteration
        }

        return products;
    }
};
