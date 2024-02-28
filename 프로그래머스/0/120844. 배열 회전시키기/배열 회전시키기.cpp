#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> result;
    
    if(direction == "right"){
        result.push_back(numbers[numbers.size() - 1]);
        
        for(int i = 0; i < numbers.size() - 1; i++){
            result.push_back(numbers[i]);
        }       
    }
    else {
        for(int i = 1; i < numbers.size(); i++){
            result.push_back(numbers[i]);
        } 
        result.push_back(numbers[0]);
    }
    
    return result;
}