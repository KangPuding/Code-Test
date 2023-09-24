#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i = left; i <= right; i++){ // left ~ right 까지 값을 for문으로 반복 

        int a = 0; // 약수의 개수 
        for(int j =1; j <= i; j++){  // 약수 구하기
            
            // 나머지가 0이면 약수 개수 증가 
            if (i % j == 0)   
                a++;
        }
         answer = (a % 2 == 0 ? answer += i : answer -= i);
        }
        return answer;
    }
