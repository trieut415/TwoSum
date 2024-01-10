#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

//Brute force method 1
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for(int i = 0; i < nums.size() -1; i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
            }
            return result;
    };
};

*/

//Unordered Map method 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> numMap;
       int complement = 0;

       for(int i = 0; i < nums.size(); i++){
           complement = target - nums[i];           //find complement

           if (numMap.find(complement) != numMap.end()){
               return {numMap[complement], i};
           }
           numMap[nums[i]] = i;
       }
       return {};
    }
};
