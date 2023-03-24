#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
       int n, num, digit, rev = 0;
        num = x;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         return true;
     else
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
