// Parenthesis Checker
// GFG : Easy 18-09-2024

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> checker;
        char brackets;
        for(int i=0;i<x.length();i++){
            brackets=x[i];
            if(brackets == '(' || brackets == '{' || brackets == '['){
                checker.push(brackets);
            }
            else{
                if(checker.empty() )return false; 
                else if(brackets == ')'){
                    if(checker.top()!='(')return false;
                    checker.pop();
                }
                else if(brackets == '}'){
                    if(checker.top()!='{')return false;
                    checker.pop();
                }
                else if(brackets == ']'){
                    if(checker.top()!='[')return false;
                    checker.pop();
                }
            }
        }
        if(!checker.empty())return false;
        return true;
    }

};
