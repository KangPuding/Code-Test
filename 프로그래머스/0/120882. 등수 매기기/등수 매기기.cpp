#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> a;
    
    for(int i = 0; i < score.size(); i++){    
        a.push_back(score[i][0] + score[i][1]);
    }
    
    for(int i = 0; i < a.size(); i++){
        int count = 1;
        for(int j = 0; j < a.size(); j++){
            if(a[i] < a[j]) 
                count++;
        }
        answer.push_back(count);
    }
    
    return answer;
}