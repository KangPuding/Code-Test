#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int x = 1;
        
    while (x > 0){
        
         if (n % x == 1){
             return x;
         }
            x++;
    }   
}