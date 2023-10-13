#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> p;
    
    for(int i =0; i < numbers.size(); i++){
        for(int j =0; j < numbers.size(); j++){
            if (i != j)
           p.push_back(numbers[i] * numbers[j]);
        }
    }
    
     sort(p.begin(), p.end(), greater<int>());
      
    answer = p[0];
    
    return answer;
}