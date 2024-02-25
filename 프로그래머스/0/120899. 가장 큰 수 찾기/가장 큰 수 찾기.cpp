#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int result = 0, count = 0;
    
    for(int i = 0; i < array.size(); i++){
        if(result < array[i]){
           result = array[i];
           count = i;
        }
    }
    answer.push_back(result);
    answer.push_back(count);
    
    return answer;
}