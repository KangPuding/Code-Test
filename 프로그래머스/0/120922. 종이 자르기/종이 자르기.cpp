#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    int answer = 0;
    int m, n = 0;
    
    m = M - 1;
    n = (N - 1) * M;
    
    answer = n + m;
    return answer;
}