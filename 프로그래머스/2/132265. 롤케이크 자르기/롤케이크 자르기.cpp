#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int, int> leftMap;
    unordered_map<int, int> rightMap;
    
    for(int i : topping)
    {
        rightMap[i]++;
    }
     
    for(int i = 0; i < topping.size(); i++)
    {
        int t = topping[i];
        
        leftMap[t]++;
        
        rightMap[t]--;
        
        if (rightMap[t] == 0) 
            rightMap.erase(t);
        
        if (leftMap.size() == rightMap.size()) 
            answer++;    
    }
    
    return answer;
}