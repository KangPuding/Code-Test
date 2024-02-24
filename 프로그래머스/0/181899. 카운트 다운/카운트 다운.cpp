#include <string>
#include <vector>


using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    
    for(int i = start; i >= end_num; i--){
        answer.push_back(i);
    }
        
        
//   algorithm 사용   
//     for(int i = end_num; i <= start; i++){
//         answer.push_back(i);
//     }
    
//     reverse(answer.begin(), answer.end());
    
    return answer;
}