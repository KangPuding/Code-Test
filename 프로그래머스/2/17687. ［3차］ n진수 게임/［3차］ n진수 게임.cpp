#include <string>
#include <vector>

using namespace std;

string notation(int num, int base)
{
    const string digits = "0123456789ABCDEF";
    string sResult = "";
    
    if(num == 0)
        return "0";
   
    while(num > 0)
    {
        sResult = digits[num % base] + sResult;
        num /= base;
    }
    
    
    return sResult;
}

string solution(int n, int t, int m, int p) {
    
    string sResult = "";
    int nCount = 0;
    
    while (sResult.size() < t * m)
    {
        sResult += notation(nCount++, n);
    }
    
    string answer = "";
    for (int i = 0; i < t; i++)
    {
        answer += sResult[i * m + (p - 1)];
    }
    
    return answer;
}