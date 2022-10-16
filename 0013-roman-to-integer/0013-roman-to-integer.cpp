class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        int result =0;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int len=s.size();
        int ans=0,curr,next;
        int i=0;
        for(i=0;i<len;i++){
            curr=mp[s[i]];
            next=mp[s[i+1]];
            if(curr>=next){
                ans+=curr;
            }
            else{
                next=next-curr;
                ans+=next;
                i=i+1;
            }
            }
        return ans;
        }
    
};