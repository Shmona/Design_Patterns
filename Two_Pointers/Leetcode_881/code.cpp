#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();

        sort(people.begin(), people.end());

        int left = 0, right = n-1;
        int count = 0;

        while(left <= right)
        {
            if (people[left] + people[right] <= limit)
            {
                left++;
                right--;
            }
            else    
                right--;
            count++;
        }
        return count;
    }
};
int main()
{
    Solution sol;
    vector<int> v1 = {1,2};
    int l1 = 3;
    cout << sol.numRescueBoats(v1, l1) << endl;   // expects 1

    vector<int> v2 = {3,2,2,1};
    int l2 = 3;
    cout << sol.numRescueBoats(v2, l2) << endl;   // expects 3

    vector<int> v3 = {3,5,3,4};
    int l3 = 5;
    cout << sol.numRescueBoats(v3, l3) << endl;   // expects 4

    return 0;
}
