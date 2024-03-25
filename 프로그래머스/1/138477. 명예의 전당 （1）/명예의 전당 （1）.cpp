#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> group;
    
    for(int i = 0; i < score.size(); i++){
        
        group.push_back(score[i]);
        sort(group.begin(), group.end(), greater<>());
        
        if(group.size() > k){
            group.erase(group.begin() + k, group.end());
        }
        
        answer.push_back(group[group.size() - 1]);
    }
    return answer;
}