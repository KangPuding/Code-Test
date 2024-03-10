#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int l_n = 1;
    
    while (l_n < arr.size()){
        l_n *= 2;
    }
    
    vector<int> answer = arr;
    
    for(int i = answer.size(); i < l_n; i++)
        answer.push_back(0);
    
    return answer;
}