#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(auto s : numbers){
        answer.push_back(s * 2);
    }
    
    return answer;
}