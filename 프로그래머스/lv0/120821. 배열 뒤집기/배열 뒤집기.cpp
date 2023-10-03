#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

     // 배열을 뒤집는다 
     reverse(num_list.begin(), num_list.end());
    
    // 뒤집힌 배열을 answer에 복사한다
    for (int i = 0; i < num_list.size(); i++) {
        answer.push_back(num_list[i]);
    }
    
    return answer;
}