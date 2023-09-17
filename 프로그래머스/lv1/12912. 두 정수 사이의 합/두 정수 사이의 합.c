#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long answer = 0;
    
    if ( a > b) {
        for (int i = b; i < a+1; i++){
            answer += i;
        }
        return answer;
    }
     else if ( a < b) {
        for (int i = a; i < b+1; i++){
            answer += i;
        } 
        return answer;
     }
        else 
            return a;
    }
    
//     if ( a == b )
//         answer = a;
//     else if (a > b)
//         answer = ((a-b) +1) * (a+b) /2;
//     else 
//         answer = ((b-a) +1) * (a+b) /2;

//     return answer;

