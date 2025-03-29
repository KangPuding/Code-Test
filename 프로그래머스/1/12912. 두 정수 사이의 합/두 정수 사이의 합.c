#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a < b)
    {
        while(a <= b)
        {
            answer += a;
            a++;
        }     
    }  
    else if(a > b)
    {
        while(b <= a)
        {
            answer += a;
            a--;
        }
    }
    else if (a == b)
    {
        answer = a;   
    }
    
    return answer;
}