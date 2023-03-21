#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i = 0; i< n; i++){
            for(int j = i+1 ; j< n; j++){
            if( nums[i]+nums[j] == target){
                return {i,j};
            }
          }
        }
        return {-1,-1};
    }
};


int main() {
    // Write C++ code here
    std::cout<< "Hello world!";
    Solution s;
    vector<int> sum;
    vector<int> data = {2,7,11,15};
    sum = s.twoSum(data,9);
    std::cout<< "data:"<< sum<<std::endl;

    return 0;
}
