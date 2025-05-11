#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> Day;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int nRemain = 100 - progresses[i];
        int nDay = (nRemain + speeds[i] - 1) / speeds[i];
        Day.push_back(nDay);
    }
    
    int nRemainDay = Day[0]; 
    int nCount = 1;
    
    for(int i = 1; i  < Day.size(); i++)
    {
         if(nRemainDay >= Day[i])
        {
            nCount++;
        }
        else
        {
            answer.push_back(nCount);
            nCount = 1;
            nRemainDay = Day[i];
        }  
    }
    
    answer.push_back(nCount);
    
    return answer;
}