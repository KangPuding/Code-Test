  #include <stdio.h>
  #include <stdbool.h>
  #include <stdlib.h>

  long long solution(long long n) {
      long long result; 
      long long x = 0;
    
    while(x * x < n) {
        x++;
        
       if (x * x == n) {
           
      result = (x+1) * (x+1);
    }
    else {
        result = -1;
    }
    } 
      return result;
}

//  #include <stdio.h>
//  #include <stdbool.h>
//  #include <stdlib.h>
//  #include <math.h>

//  long long solution(long long n){
    
//      long long answer = 0;
//      // 제곱근
//      long long m = (long long)sqrt(n);
    
//      answer = (m * m == n ? (m + 1) * (m + 1) : -1);
    
//      return answer;
//  }
