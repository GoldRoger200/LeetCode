class Solution {
public:
    int help(vector<int> &v){
        int prev=v[0];
        int prev2=0;
        for(int i=1;i<v.size();i++){
            int t=v[i];
            if(i>1) t+=prev2;
            int t_comp=0+prev;
            int curr=max(t,t_comp);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
       return help(nums);
    }
};