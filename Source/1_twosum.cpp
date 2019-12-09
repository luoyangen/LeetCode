//
// Created by macbookpro on 2019/12/8.
//
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> occurMap;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int leftnum = target - nums[i];
            if (occurMap.find(leftnum) != occurMap.end()) {
                res.push_back(i);
                res.push_back(occurMap[leftnum]);
                break;
            }else{
                occurMap[nums[i]] = i;
            }
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<int> a = {2, 7, 11, 15};
    vector<int> twoindex = sol.twoSum(a, 9);
    cout << twoindex[0] << twoindex[1] << endl;
}
