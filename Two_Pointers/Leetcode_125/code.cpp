#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n-1;

        while( i < j)
        {
            while ( i < j && !isalnum(s[i]))
                i++;
            while ( i < j && !isalnum(s[j]))
                j--;
            
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            
            i++;
            j--;
        }
        return true;   
    }
};

int main()
{
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    cout << sol.isPalindrome(s) << endl; // expects true

    string s1 = "race a car";
    cout << sol.isPalindrome(s1) << endl; // expects false

    string s2 = " ";
    cout << sol.isPalindrome(s2) << endl;  // expects true

    return 0;
}
