#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i <= t.size() - p.size(); i++){
        string tmp = t.substr(i, p.size());
        long long tmpint = stoll(tmp), Pint = stoll(p);
        
        if (tmpint <= Pint)
            answer++;
    }
    return answer;
}