#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;
    
    for(int i = 0; i <= start_num - end_num; i++){
        answer.push_back(start_num - i);
    }
    
    return answer;
}