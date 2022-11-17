class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int m=-1;
        for(int i=0;i<nums.size();i++){
            int k=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(k==-nums[j] && m<abs(k)){
                    m=abs(k);
                }
            }
        }
        return m;
    }
};