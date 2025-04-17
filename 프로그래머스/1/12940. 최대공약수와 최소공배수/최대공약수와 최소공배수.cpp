#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int nData = 0;
    int lcm = (n * m);
    
    while(n != 0)
    {
        nData = m % n;
        m = n;
        n = nData;
    }
    answer.push_back(m);
    
    lcm /= m;
    answer.push_back(lcm);
    return answer;
}