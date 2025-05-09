#include <iostream>

using namespace std;

int Mul(int nData)
{
    if(nData % 2 != 0)
        return nData + 1;
    
    return nData;
}

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while(a != b)
    {
        a = Mul(a) / 2;
        b = Mul(b) / 2;
        answer++;
    }
    
    return answer;
}