#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    
    for(auto s : my_string){
        if(48 <= s && s <= 57)
            answer.push_back(s - '0');
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}