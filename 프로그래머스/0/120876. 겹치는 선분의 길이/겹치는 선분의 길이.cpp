#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int arPoint[201] = {};
    int answer = 0;
    
    for(int i = 0; i < lines.size(); i++)
    {
        int nStart = lines[i][0] + 100;
        int nEnd = lines[i][1] + 100;
        
        for(int j = nStart; j < nEnd; j++)
        {
            arPoint[j]++;
        }
    }
    
    for(int i = 0; i < 201; i++)
    {
        if(arPoint[i] >= 2)
            answer++;
    }
    
    return answer;
}