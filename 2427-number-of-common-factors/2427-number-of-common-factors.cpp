class Solution {
public:
    int commonFactors(int a, int b) {
        int f=0;
       for(int i=1;i<=max(a,b);i++){
           if(b%i==0 && a%i==0)
               f++;
       }
        return f;
    }
};