class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        string st="";
        for(int i=str.size()-1;i>=0;i--){
            st+=str[i];
        }
        if(st.compare(str)==0)
            return true;
        else
            return false;
    }
};