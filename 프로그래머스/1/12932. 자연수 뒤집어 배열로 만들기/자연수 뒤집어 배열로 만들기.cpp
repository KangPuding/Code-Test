#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int nData = 10;
    int nRemainder{};
    
    while(n > nData)
    {
        nRemainder = n % nData;
        answer.push_back(nRemainder);
        n = n / 10;
    }
    
        nRemainder = n % nData;
        answer.push_back(nRemainder);
        n = n / 10;
    return answer;
}