#include <iostream>>
#include <vector>

using namespace std;

class Solution {
public:
    // overwrite + two-pointer approach
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        if (n <= 2)
            return n;

        int k = 0;
        for ( int i = 0; i < n-2; i++)
        {
            if (nums[i] != nums[i+1])
                nums[k++] = nums[i];
            else
            {
                if (nums[i+1] != nums[i+2])
                    nums[k++] = nums[i+1];
            }
        }
        nums[k++] = nums[n-2];
        nums[k++] = nums[n-1];
        nums.resize(k);
        return k;
    }
    // Another way using two-pointer
    int removeDuplicates2(vector<int>& nums) {

        int n = nums.size();
        if (n <= 2)
            return n;

        int write = 2;
        for ( int read = 2; read < n; read++)
        {
            if (nums[read] != nums[write - 2])
                nums[write++] = nums[read];
        }
        nums.resize(write);
        return write;
    }
};

int main()
{
    Solution sol;
    vector<int> v1 = {1,1,1,2,2,3};
    cout << sol.removeDuplicates(v1) << endl;
    cout << "Array after removing duplicates : \n" << "  ";
    for (auto x : v1)
        cout << x << "  ";

    cout << endl;
    vector<int> v2 = {1,1,1,2,2,3};
    cout << sol.removeDuplicates2(v2) << endl;
    cout << "Array after removing duplicates : \n" << "  ";
    for (auto x : v2)
        cout << x << "  ";

    return 0;
}
