class Solution {
public:
    int sq(int x){
        int l=1,r=x/2,mid,ans;
        long temp;
        while(l<=r){
            mid=(l+r)/2;
            temp=(long)mid*(long)mid;
            if(temp==x)
                return mid;
            if(temp<x)
                ans=mid,l=mid+1;
            else
                r=mid-1;
        }
        return ans;
    }
    int mySqrt(int x) {
        if(x<=1)
            return x;
        return sq(x);
    }
};