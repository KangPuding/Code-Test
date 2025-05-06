#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
     stack<char> st;
    
    for (char ch : s) 
    {
        if (!st.empty() && st.top() == ch) 
            st.pop(); 
        else 
            st.push(ch);
    }
    
    if(st.empty())
        return 1;
    
    return 0;
          
}


 //int answer = -1;

 //string Str = s;
 //int nIndex = 0;

 //while (nIndex < Str.length())
 //{
 //    if (nIndex < Str.length() - 1 && Str[nIndex] == Str[nIndex + 1])
 //    {
 //        Str.erase(nIndex, 2);
 //        nIndex = 0;
 //    }
 //    else
 //        nIndex++;
 //}

 //if (Str.empty())
 //    answer = 1;
 //else
 //    answer = 0;

 //return answer;