//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        int ans=0;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!='?' && s[s.size()-1-i]=='?')
                s[s.size()-1-i]=s[i];
            else if(s[i]=='?' && s[s.size()-1-i]!='?')
                s[i]=s[s.size()-1-i];
            else if(s[i]!=s[s.size()-1-i] && s[i]!='?' && s[s.size()-1-i]!='?')
                return -1;
        }
        char p ='\0';
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!='?'){
                if(p=='\0')
                    p=s[i];
                else if(s[i]!=p)
                    ans+=abs(s[i]-p);
                p=s[i];
            }
        }
        return ans*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends