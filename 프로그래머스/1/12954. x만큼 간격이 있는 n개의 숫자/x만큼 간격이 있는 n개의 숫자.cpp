#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int nData;
    
    for(int i = 0; i < n; i++)
    {
        nData += x;
        answer.push_back(nData);
    }
    return answer;
}