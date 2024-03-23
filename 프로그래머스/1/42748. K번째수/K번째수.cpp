#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> s;
    
    for(int i = 0; i < commands.size(); i++){
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){
            s.push_back(array[j]);
        }
        
        sort(s.begin(), s.end());
        answer.push_back(s[commands[i][2] - 1]);
        
        s.clear();
    }
    return answer;
}