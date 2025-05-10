#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isVaild(string s)
{
    stack<char> st;
    
    for(char c : s)
    {
        if(c == '(' || c =='{' || c == '[')
            st.push(c);
        else
        {
            if(st.empty())
                return false;
            
            char top = st.top();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '['))
                return false;
            
            st.pop();       
        }
    }
    
    return st.empty();
}

int solution(string s) 
{
    int answer = 0;
    int len = s.length();

    for (int i = 0; i < len; ++i) 
    {
        if (isVaild(s)) 
            answer++;
        
        s = s.substr(1) + s[0];
    }

    return answer;
}