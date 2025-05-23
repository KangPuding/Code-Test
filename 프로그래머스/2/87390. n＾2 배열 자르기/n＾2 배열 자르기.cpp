#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i = left ; i <= right; i++)
    {
        int nX = i / n;
        int nY = i % n;
        answer.push_back(max(nX,nY) + 1);
    }
    
    return answer;
}