#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int n = 12; 
    int result = solution(n);
    printf("%d의 약수의 합은 %d입니다.\n", n, result);

    return 0;
}