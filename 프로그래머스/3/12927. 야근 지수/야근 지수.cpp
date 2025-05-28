#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<int> Time;


    for(int w : works)
    {
        Time.push(w);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(!Time.empty() && Time.top() != 0)
        {
            int nTop = Time.top();
            Time.pop();
            Time.push(nTop - 1);
        }
    }
    
    while (!Time.empty()) {
        long long work = Time.top();
        Time.pop();
        answer += work * work;
    }
    
    return answer;
}