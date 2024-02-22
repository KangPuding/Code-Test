#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    
    reverse(num_list.begin(), num_list.end());
    
    if(num_list[0] > num_list[1])
        answer.push_back(num_list[0] - num_list[1]);
    else
        answer.push_back(num_list[0] * 2);
    
    return answer;
}