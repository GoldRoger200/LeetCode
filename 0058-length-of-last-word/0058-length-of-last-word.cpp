class Solution {
public:
    int lengthOfLastWord(string s) {
        int f=0;
        bool b=false;
        for(int i=s.length()-1;i>=0;i--){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                b=true;
                f++;
            }
            else
            {
                if(b)
                    return f;
            }
        }
        return f;
    }
};