#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int* answer = (int*)malloc(sizeof(int) * 11);

    int temp = 0;
    
    while(n > 0)
    {
        answer[temp++] = n % 10;
        n /= 10;
    }

    return answer;
}

// long long numf(long long n){
//     long long i=0;
//     while(n>0)
//     {
//         n=n/10;
//         i++;
//     }
//     return i;
// }

// int* solution(long long n) {
//     // 리턴할 값은 메모리를 동적 할당해주세요.
//     long long number;
//     number= numf(n);
//     int* answer = (int*)malloc(number);
//     int i,j;
//     printf("%lld",number);

// for(i=0;i<number;i++)
// {
//     j=n%10;
//     answer[i]= j;
//     n/=10;
// }

//     return answer;
// }