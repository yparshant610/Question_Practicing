class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; //<number->index of the number >
        for(size_t i=0;i<nums.size();i++){  
           if(m.count(target-nums[i]))
               return {(int)i,m[target-nums[i]]};
            m[nums[i]]=i;
        }
        return {};
        
    }
};