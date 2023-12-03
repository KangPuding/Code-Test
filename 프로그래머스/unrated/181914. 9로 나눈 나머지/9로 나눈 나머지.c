#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* number) {
    int answer = 0;
    int sum = 0;
    
    size_t length = strlen(number); 
    
    for (int i = 0; i < length; i++) {
        sum += (number[i] - '0');    
    }
    
    answer = sum % 9;
    
    return answer;
}
