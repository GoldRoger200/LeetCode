class Solution {
public:
    void pushZeroes(vector<int>& nums){
        stable_partition(nums.begin(),nums.end(),[](int n){return n!=0;});
    }
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        pushZeroes(nums);
        return nums;
    }
};