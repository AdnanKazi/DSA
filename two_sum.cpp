#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>



using namespace std;

class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;
        // for(int i = 0; i< n; i++){
        //     for(int j = i+1 ; j< n; j++){
        //     if( nums[i]+nums[j] == target){
        //         return {i,j};
        //     }
        //   }
        // }
        //* Optimized solution
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1,-1};
    }
};


int main() {
    // Write C++ code here
    std::cout<< "Hello world!";
    Solution s;
    vector<int> sum;
    vector<int> data = {2,7,5,4,10,15};
    sum = s.twoSum(data,9);

    //* Display values    
    for(int i = 0; i < sum.size() ; i++){
        std::cout<< " data:"<<data[sum[i]];
    }

    return 0;
}

