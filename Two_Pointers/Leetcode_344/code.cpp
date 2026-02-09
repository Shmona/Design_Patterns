#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();
        int left = 0;
        int right = n-1;

        while (left < right)
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    Solution sol;
    vector<char> s = {'h','e','l','l','o'};
    sol.reverseString(s);

    cout << "reversed string \n ";
    for(char x: s)
        cout << x << "  ";

    vector<char> s1 = {'H','a','n','n','a','h'};
    sol.reverseString(s1);

    cout << "\n reversed string \n ";
    for(char x: s1)
        cout << x << "  ";


    return 0;
}
