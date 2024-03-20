#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < arr.size(); i++) {
        answer.erase(find(answer.begin(), answer.end(), arr[0])); 
        break;
    }
    
    if (answer.empty()) {
        answer.push_back(-1);
    } 

    return answer;
}