#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 0; i < numLog.size() - 1; i++){
        if(numLog[i+1]-numLog[i] == 1)
            answer.push_back('w');
        else if(numLog[i+1]-numLog[i] == -1)
            answer.push_back('s');
        else if(numLog[i+1]-numLog[i] == 10)
            answer.push_back('d');
        else if(numLog[i+1]-numLog[i] == -10)
            answer.push_back('a');
    }
    return answer;
}