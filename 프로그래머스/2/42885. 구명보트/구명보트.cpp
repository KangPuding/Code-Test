#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int nLight = 0;
    int nHeavy = people.size() - 1;
    sort(people.begin(), people.end());
    
    while(nLight <= nHeavy)
    {
        if(people[nLight] + people[nHeavy] <= limit)
            nLight++;
        
        nHeavy--;
        answer++;

    }
    
    return answer;
}