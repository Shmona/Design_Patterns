#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Overwrite and fill based two-pointer
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
                nums[k++] = nums[i];
        }
        for (int i = k; i < n; i++)
            nums[k++] = 0;    
    }
    // swap-based two‑pointer 
    void moveZeroes_2(vector<int>& nums) {
        int n = nums.size();

        int k = 0;
        for ( int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                if (i != k)
                    swap(nums[i], nums[k]);
                k++;
            }       
        }
    }
};

int main()
{
    Solution sol;
    vector<int> v1 = {0,1,0,3,12};
    sol.moveZeroes(v1);
    cout << "\n  Overwrite and fill based two-pointer  : \n";
    for (auto x : v1)
        cout << x << "  ";

    vector<int> v2 = {0,1,0,3,12};
    sol.moveZeroes_2(v2);
    cout << "\n  swap-based two‑pointer  : \n";
    for (auto x : v2)
        cout << x << "  ";

    vector<int> v3 = {2,1};
    sol.moveZeroes(v3);
    cout << "\n  Overwrite and fill based two-pointer   : \n";
    for (auto x : v3)
        cout << x << "  ";

    vector<int> v4 = {2,1};
    sol.moveZeroes_2(v4);
    cout << "\n  swap-based two‑pointer  : \n";
    for (auto x : v4)
        cout << x << "  ";
    
    return 0;
}
