#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> arrReuslt;
    
    for(int i = 0; i < commands.size(); i++)
        {
            answer.clear();
            int nFirst = commands[i][0];
            int nLast = commands[i][1];
            int nFind = commands[i][2];
            
            for(int j = nFirst - 1; j < nLast; j++)
            {
                answer.push_back(array[j]);
            }
            
            sort(answer.begin(), answer.end());
            
            arrReuslt.push_back(answer[nFind - 1]);
        }
    return arrReuslt;
}