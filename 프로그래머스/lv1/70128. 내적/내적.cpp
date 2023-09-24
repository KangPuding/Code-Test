#include <string>
#include <vector>  // vector == 위치

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    
    // a.size(); // 배열의 크기
    
    for(int i = 0; i < a.size(); i++){
        
        answer += a[i] * b[i];
    }
 
    return answer;
}