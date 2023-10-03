#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int c1 = 0;
    int c2 = 0;
    
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] % 2 == 0)
            c1++;  // 짝수
        else
            c2++;  // 홀수
    }
    
    // c1과 c2 값을 answer에 할당
    answer.push_back(c1);
    answer.push_back(c2);
    
    return answer;
}