#include <string>
#include <vector>
#include <map>

using namespace std;

void TolowerStr(string& str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
}

void makeV(string str, vector<string> & vStr)
{
    for(int i = 1; i < str.size(); i++)
    {
        if(str[i] >= 97 && str[i] <= 122 && str[i - 1] >= 97 && str[i - 1] <= 122)
        {
            string sUp = "";
            sUp += str[i - 1];
            sUp += str[i];
            vStr.push_back(sUp);
        }
    }
}

int solution(string str1, string str2) {
    int answer = 0;     
    float fUnion = 0;         //합집합
    float fIntersection = 0;  // 교집합 
    vector<string> vStr1;
    vector<string> vStr2;
    
    TolowerStr(str1);
    TolowerStr(str2);
    
    makeV(str1, vStr1);
    makeV(str2, vStr2);
    
    map<string, int> m1;
    map<string, int> m2;
    
    for (auto& s : vStr1) 
        m1[s]++;
    for (auto& s : vStr2) 
        m2[s]++;
    
    for (auto& p : m1)
    {
        string key = p.first;
        int cnt1 = p.second;
        int cnt2 = m2[key];
        fIntersection += min(cnt1, cnt2);
    }

    for (auto& p : m2)
    {
        string key = p.first;
        m1[key] = max(m1[key], p.second);
        // m1에 Key값이 없으면 자동으로 만들어지고 key에 대한 밸류값은 p.second에 들어가있으니 같이 저장 -> 합집합
    }
    
    for (auto& p : m1)
    {
        fUnion += p.second;
    }
    
    if(fIntersection == 0 && fUnion == 0)
        answer = 65536;
    else
        answer = (int)((fIntersection / fUnion) * 65536);
    
    return answer;
}