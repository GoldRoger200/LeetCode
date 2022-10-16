class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>burrito;
        vector<int>ponk;
        for(int i=0;i<nums.size();i++){
            if(burrito.find(target-nums[i])!=burrito.end()){
                ponk.push_back(burrito[target-nums[i]]);
                ponk.push_back(i);
            }
            burrito[nums[i]]=i;
        }
        return ponk;
    }
};