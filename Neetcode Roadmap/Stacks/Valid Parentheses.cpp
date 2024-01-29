//mid implementation but whatever

/* Order matters
if string is "{[]}"
Expected output is True
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c : s)
        {
            if(c == '(' || c== '[' || c=='{')
            {
                stk.push(c);
                continue;
            }

            if(c == ')' || c== ']' || c=='}')
            {
                if(stk.empty())
                {
                    stk.push(c);
                    continue;
                }
                char sTop = stk.top();
                if(sTop == '(' && c == ')')
                {stk.pop(); continue;}
                else if(sTop == '[' && c == ']')
                {stk.pop();  continue;}
                else if(sTop == '{' && c == '}')
                {stk.pop(); continue;}
                else {return false;}
            }
        }
        
        if(stk.empty())
            return true;
        else
            return false;
    }
};