#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for(int idx = 0; idx < absolutes.size(); idx++){
        if(signs[idx])
            answer += (absolutes[idx]);
        else
            answer -= (absolutes[idx]);
    }

    return answer;
}

// int solution(vector<int> absolutes, vector<bool> signs) {
//       int answer = 0;
    
//     for(auto idx = 0; idx < absolutes.size(); ++idx)
//         answer += (signs[idx]) ? absolutes[idx] : -absolutes[idx];
    
//     return answer;
// }