class Solution {
public:
    int help(vector<int> &v){
        int prev2=0;
        int prev=v[0];
        for(int i=1;i<v.size();i++){
            int t=v[i];
            if(i>1) t+=prev2;
            int nt=0+prev;
            int curr=max(t,nt);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        vector<int> v1,v2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0) v1.push_back(nums[i]);
            if(i!=nums.size()-1) v2.push_back(nums[i]);
        }
        return max(help(v1),help(v2));
            
    }
};