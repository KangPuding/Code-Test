#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int sum = 0, odd = 0;
    
    for(auto s : num_list){
        if(s % 2 == 0)
            sum++;
        else
            odd++;
    }
        answer.push_back(sum);
        answer.push_back(odd);
    
    return answer;
}