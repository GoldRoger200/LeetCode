class Solution {
public:
    int maxD(int a,int b){
        while(a%b==0)
            a/=b;
        return a;
    }
    bool isUgly(int n) {
        if(n==0)
            return false;
        n=maxD(n,2);
        n=maxD(n,3);
        n=maxD(n,5);
        return n==1;
    }
};