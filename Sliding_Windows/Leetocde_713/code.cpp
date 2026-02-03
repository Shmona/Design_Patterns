#include <iostream>
#include <vector> 

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0 || k == 0)
            return 0;
      
        int count = 0;
        for (int i = 0 ; i < n; i++)
        {
            long long prod = 1;
            if (nums[i] < k)
            {
                count++;
                prod *= nums[i];
                for ( int j = i + 1; j < n; j++)
                {
                    prod *= nums[j];
                    if (prod < k) 
                        count++;
                    else 
                        break;
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<int> v = { 10, 5, 2, 6};
    int k = 100;
    Solution sol;
    cout << " No. of contiguous subarrays having prod less than " << k  << " = " 
         << sol.numSubarrayProductLessThanK(v, k) << endl;

    int k1 = 10;
    cout << " No. of contiguous subarrays having prod less than " << k1  << " = " 
         << sol.numSubarrayProductLessThanK(v, k1) << endl;
    return 0;
}
