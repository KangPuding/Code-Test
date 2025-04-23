#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> nMin;
    
    for(int i = 0; i < score.size(); i++)
    {
        answer.push_back(score[i]);
        sort(answer.begin(), answer.end(), greater<int>());

        if (answer.size() > k)                       
            answer.pop_back();  
        
        nMin.push_back(answer.back()); 
    }
    return nMin;
}