class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        int freq=INT_MIN,ans=-1;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        for(auto& it:mp){
            if(it.first%2==0){
                if(freq<it.second){
                     freq=it.second;
                    ans=it.first;
                   
                }
                else if(freq==it.second)
                    ans=min(ans,it.first);
            }
        }
        return ans;
    };
};