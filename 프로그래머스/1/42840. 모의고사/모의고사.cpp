#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int s1[5] = {1, 2, 3, 4, 5};
    int s2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int s3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int s1_cnt = 0;
    int s2_cnt = 0;
    int s3_cnt = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(s1[i % 5] == answers[i])
            s1_cnt++;
        if (s2[i % 8] == answers[i])
            s2_cnt++;
        if (s3[i % 10] == answers[i])
            s3_cnt++;
    }
    
    int Maxcnt = max(s1_cnt, s2_cnt);
    Maxcnt = max(Maxcnt, s3_cnt);
    
    if(Maxcnt == s1_cnt)
        answer.push_back(1);
    if(Maxcnt == s2_cnt)
        answer.push_back(2);
    if(Maxcnt == s3_cnt)
        answer.push_back(3);
    
    return answer;
}