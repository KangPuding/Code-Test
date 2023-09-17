#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    
    int a = x;
    int n = 0;
    
    while (a > 0){
        n += a  % 10;
        a /= 10;
    }
     return x % n == 0 ? true : false; 
}