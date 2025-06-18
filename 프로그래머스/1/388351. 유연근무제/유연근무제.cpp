#include <string>
#include <vector>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    
    for(int i = 0; i < schedules.size(); i++)
    {
        int nSetTime = schedules[i]; // 정한 시간 
        int nDay = startday; // 요일
        int nSucc = 0; // 횟수 -> 총 5번이여야 성공
        
        int nTime = schedules[i] / 100;
        int nMinute = schedules[i] % 100; 
                
        nMinute += 10;
        
        if(nMinute >= 60)
        {
            if(nTime + 1 >= 24)
                nTime = 0;
            else
                nTime += 1;
            
            nMinute -= 60;
        }
        int nDeadLine = (nTime * 100) + nMinute;
                
        
        for(int j = 0; j <timelogs[i].size(); j++)
        {
            if(nDay > 7)
                nDay = 1;
            
            if(nDay != 6 && nDay != 7 && timelogs[i][j] <= nDeadLine)
                    nSucc++;
            
            nDay++;
        }
        
        if(nSucc == 5)
            answer++;
    }
    return answer;
}