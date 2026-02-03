#include <iostream>
#include <vector> 

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0 || k == 0)
            return 0;
      
        long long prod = 1;
        int count = 0;
        int left = 0, right = 0;
        while (right < n)
        {
            prod *= nums[right];
            while (left <= right && prod >= k)
            {
                prod /= nums[left];
                left++;
            }
            count += (right - left + 1);
            right++;
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
