#include <string>
#include <vector>

using namespace std;

int minIndex(vector<string>& keymap, char nFindWord)
{
    int nMin = 101;
    bool bFind = false;
    
    for(int i = 0; i < keymap.size(); i++)
    {
        int j = 0;
        bool bFound = false;
        
        while(j < keymap[i].size() && !bFound)
        {
            if(nFindWord == keymap[i][j])
            {
                int nPress = j + 1;
                if(nMin > nPress)
                {
                    nMin = nPress;
                    bFind = true;
                }
                bFound = true; 
            }
            j++;
        }
    }
    
    if(!bFind)
        return -1;

    return nMin;
}

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    for(int i = 0; i < targets.size(); i++)
    {
        int nIndex = 0;
        bool bFail = false;
        
        for(int j = 0; j < targets[i].size(); j++)
        {
            char cFindWord = targets[i][j];
            int nCount = minIndex(keymap, cFindWord);
            
            if(nCount == -1)
                bFail = true;
            else
                nIndex += nCount;
        }
        if(bFail)
            answer.push_back(-1);
        else
            answer.push_back(nIndex);
    }
    
    return answer;
}