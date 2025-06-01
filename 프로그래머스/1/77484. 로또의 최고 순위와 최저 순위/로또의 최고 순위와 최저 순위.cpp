#include <string>
#include <vector>

using namespace std;
int Caclulation(int nSuc, int nZero)
{
    int nSum = nSuc + nZero;
    
    if(nSum <= 1)
        return 6;
    else if (nSum == 2)
        return 5;
    else if (nSum == 3)
        return 4;
    else if (nSum == 4)
        return 3;
    else if (nSum == 5)
        return 2;
    else if (nSum == 6)
        return 1;
    
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int nSuc = 0;
    int nZero = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        int nNum = lottos[i];
        
        if(nNum == 0)
            nZero++;
        else
        {
            for(int j = 0; j < lottos.size(); j++)
            {
                if(nNum == win_nums[j])
                    nSuc++;
            }
        }
    }
    answer.push_back(Caclulation(nSuc, nZero));
    answer.push_back(Caclulation(nSuc, 0));
    return answer;
}