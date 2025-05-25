#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct S_NODE 
{
    int stage;
    double failureRate;
};

bool Compare(S_NODE a, S_NODE b) 
{
    if (a.failureRate == b.failureRate)
        return a.stage < b.stage;
    return a.failureRate > b.failureRate;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> count(N + 2, 0);  
    for (int s : stages) 
    {
        count[s]++;
    }

    vector<S_NODE> results;
    int users = stages.size();

    for (int i = 1; i <= N; i++)
    {
        double rate = 0.0;
        if (users > 0) 
        {
            rate = (double)count[i] / users;
            users -= count[i];
        }
        results.push_back({i, rate});
    }

    sort(results.begin(), results.end(), Compare);

    vector<int> answer;
    for (auto& r : results) 
    {
        answer.push_back(r.stage);
    }

    return answer;
}