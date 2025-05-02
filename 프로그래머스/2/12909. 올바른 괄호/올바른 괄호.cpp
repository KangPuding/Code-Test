#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int nCount = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            nCount++;
        else if (s[i] == ')')
            nCount--;

        if (nCount < 0)
            return false;
    }
    
    return nCount == 0;
}