#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer (n);      // n개 리스트
    
    // x 부터 시작
    for (long i = 0; i < n; i++) {
        answer[i] = x * (i+1);
    }

    return answer;
}