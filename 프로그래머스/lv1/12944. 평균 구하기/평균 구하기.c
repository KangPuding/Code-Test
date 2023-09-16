#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    
    if (arr_len <= 0){
         return 0;   
    }
    
    int a = 0;
    for (int i = 0; i <arr_len; i++)
        a += arr[i];
    
    answer =(double)a / arr_len;
    return answer;
}