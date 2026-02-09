#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        int left = 0; 
        int right = n-1;
        vector<int> res(n, -1);
        int k = n-1;

        while (left <= right)
        {
            if (abs(nums[left])  <  abs(nums[right]))
            {
                res[k] =  nums[right] * nums[right];
                right--;
            }
            else
            {
                res[k] = nums[left] * nums[left];
                left++;
            }
            k--;
        }
        return res; 
    }
};

int main()
{
    Solution sol;
    vector<int> v1 = {-4,-1,0,3,10};
    vector<int> res = sol.sortedSquares(v1);    //expects {0,  1,  9,  16, 100 }

    cout << " Sorted Squared vector : \n";
    for (auto x : res)
        cout << x << "  ";

    vector<int> v2 = {-4,-3,-2, -1};
    vector<int> res1 = sol.sortedSquares(v2);  //expects {1, 4, 9, 16}

    cout << "\n Sorted Squared vector : \n";
    for (auto x : res1)
        cout << x << "  ";
    return 0;
}
