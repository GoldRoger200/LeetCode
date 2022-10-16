class Solution {
public:
    int power(int a){
        int sqSum=0;
        while(a){
            sqSum+=(a%10)*(a%10);
            a/=10;
        }
        return sqSum;
    }
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=power(slow);
            fast=power(power(fast));
        }while(slow!=fast);
        return slow==1;
    }
};