#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int  l = m+n;

        int k = 0, i = 0, j = 0;
        vector<int> merge (l, 0);

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
                merge[k++] = nums1[i++];      
            else
                merge[k++] = nums2[j++];
        }
        while (i < m)
            merge[k++] = nums1[i++];

        while (j < n)
            merge[k++] = nums2[j++];
    
        if (l%2 == 0)
            return (double)(merge[l/2] + merge[l/2 - 1])/2;
        else
            return (double)merge[l/2];
        
    }
};

int main()
{
    Solution sol;
    vector<int> v1 = {1,3};
    vector<int> v2 = {2};
    cout << sol.findMedianSortedArrays(v1, v2) << endl;  // expects  2.00000

    vector<int> v3 = {1,2};
    vector<int> v4 = {3,4};
    cout << sol.findMedianSortedArrays(v3, v4) << endl;   // expects   2.50000
    return 0;
}
