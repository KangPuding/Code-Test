#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i < photo.size(); i++)
    {
        int nSum = 0;
        for(int j = 0; j < photo[i].size(); j++)
        {
            for(int w = 0; w < name.size(); w++)
            {
                if(photo[i][j] == name[w])
                    nSum += yearning[w];
            }
        }
        answer.push_back(nSum);
    }
    return answer;
}