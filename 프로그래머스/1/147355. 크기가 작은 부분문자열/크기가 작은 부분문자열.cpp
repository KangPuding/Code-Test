#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i <= t.size() - p.size(); i++)
    {
        string Str = "";
        for (int j = i; j < i + p.size(); j++)
        {
            Str.push_back(t[j]);
        }
        
       if (stoll(Str) <= stoll(p))
            answer++;
    }
    
    return answer;
}