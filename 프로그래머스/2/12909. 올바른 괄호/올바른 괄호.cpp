#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int nSize = s.size();
    bool isTrue = true;
    int nCount = 0;

    if (s[0] == ')' || s[nSize - 1] == '(')
        isTrue = false;
    else
    {
        for (int i = 0; i < nSize; i++)
        {
            if (nCount == 0 && s[i] == ')')
                isTrue = false;
            else 
            {
                if (s[i] == '(')
                    nCount++;
                else
                    nCount--;
            }
        }
    }

    if (nCount != 0)
        isTrue = false;
    
    return isTrue;
}