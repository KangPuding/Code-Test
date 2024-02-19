#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a = 0, b = 0;
    
    for(auto s : num_list){
        if(s % 2 == 0)
            a++;
        else
            b++;
    }
        answer.push_back(a);
        answer.push_back(b);
    
    return answer;
}