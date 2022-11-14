class Solution {
public:
    int reverse(int x) {
        bool b=false;
        if(x<0 && x>INT_MIN){
            b=true;
            x=-x;
        }
        int rev=0,m=x;
        while(x>0){
            int d=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
                return 0;
            rev=rev*10+d;
            x/=10;
        }
        return (b==true)?-rev:rev;
    }
};