class Solution {
public:
    int first(vector<int>& nums,int l,int h,int n,int target){
        if(l<=h){
            int mid=l+(h-l)/2;
            if((mid==0 || target>nums[mid-1]) && nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                return first(nums,mid+1,h,n,target);
            else
                return first(nums,l,mid-1,n,target);
        }
        return -1;
    }
    int last(vector<int>& nums,int l,int h,int n,int target){
        if(l<=h){
            int mid=l+(h-l)/2;
            if((mid==n-1 || target<nums[mid+1]) && nums[mid]==target)
                return mid;
            else if(target<nums[mid])
                return last(nums,l,mid-1,n,target);
            else
                return last(nums,mid+1,h,n,target);
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int f=first(nums,0,nums.size()-1,nums.size(),target);
        int l=last(nums,0,nums.size()-1,nums.size(),target);
        v.push_back(f);
        v.push_back(l);
        return v;
    }
};