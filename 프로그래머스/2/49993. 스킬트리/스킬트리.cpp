#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(int i = 0; i < skill_trees.size(); i++)
    {
        string sFillter = "";
        for(char fillter : skill_trees[i])
        {
            if(skill.find(fillter) != string::npos)
                sFillter += fillter;
        }
        
        bool isVaild = true;
        int j = 0;
        
        while(j < sFillter.size() && isVaild)
        {
            if (sFillter[j] != skill[j])
                isVaild = false;
            j++;
        }
        
        if (isVaild)
            answer++;
    }
    return answer;
}