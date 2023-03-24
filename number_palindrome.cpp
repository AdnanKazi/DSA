#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int t;
        while (x != 0)
        {
            t = x % 10;
        }
        std::cout << t;
        return false;
    }
};

int main()
{
    // Write C++ code here
    Solution s;
    cout<<"Result:";
    cout << s.isPalindrome(1221);

    return 0;
}
