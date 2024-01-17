#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> n = emergency;
    
    sort(n.begin(), n.end(), greater<>());
    
    for(int i = 0; i < emergency.size(); i++){
        for(int j = 0; j < n.size(); j++){
            if(emergency[i] == n[j]){
                answer.push_back(j+1);
            }
        }
    }
    return answer;
}