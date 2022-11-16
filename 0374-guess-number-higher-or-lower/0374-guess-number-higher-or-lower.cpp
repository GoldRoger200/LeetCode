/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int start=1,end=n;
        while(start<=n){
        long long int mid=(start+end)/2;
        int G=guess((int)mid);
        if(G==0)
            return mid;
        else if(G==1)
            start=mid+1;
        else
            end=mid-1;
        }
        return 0;
    }
};