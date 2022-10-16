class Solution {
public:
    bool isValid(string expression) {
        stack<char>s;
        char c;
        for(int i=0;i<expression.length();i++){
            if(expression[i]=='('||expression[i]=='{'||expression[i]=='['){
                s.push(expression[i]);
                continue;
            }
            if(s.empty())
                return false;
            switch(expression[i]){
                case ')'  :
                    c=s.top();
                    s.pop();
                    if(c=='{'||c=='[')
                        return false;
                    break;
                case '}':
                    c=s.top();
                    s.pop();
                    if(c=='('||c=='[')
                        return false;
                    break;
                case ']':
                    c=s.top();
                    s.pop();
                    if(c=='('||c=='{')
                        return false;
                    break;
            }
        }
        return s.empty();
    }
};