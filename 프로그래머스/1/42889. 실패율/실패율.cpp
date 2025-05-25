#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<int> stageCount(N + 2, 0);
    for(int i = 0; i <stages.size(); i++)
    {
        stageCount[stages[i]]++;
    }
    
    vector<double> failure(N + 1);
    int nTotal = stages.size();
    
    for(int i = 0; i <= N; i++)
    {
        if(nTotal == 0)
            failure[i] = 0.0;
        else
        {
            failure[i] = (double)stageCount[i] / nTotal; 
            nTotal -= stageCount[i];
        }
    }
    
    vector<pair<int, double>> temp;
    for (int i = 1; i <= N; i++) 
    {
        temp.push_back({i, failure[i]});
    }
    
    sort(temp.begin(), temp.end(), [](pair<int, double>& a, pair<int, double>& b) {
        if (a.second == b.second)
            return a.first < b.first; 
        return a.second > b.second;  
    });

    for (int i = 0; i < temp.size(); i++) {
        answer.push_back(temp[i].first);
    }
    
    return answer;
}