#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> nVec;
    
    for(int i = 0; i < s.size(); i++)
    {
        nVec.push_back(s[i]);
    }
    
    sort(nVec.begin(), nVec.end(), greater<char>());
    
    for(int i = 0; i < nVec.size(); i++)
    {
        answer += nVec[i];
    }
    return answer;
}