#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> a;
    stringstream ss(s);
    string temp;
    
    while(ss >> temp) 
        a.push_back(temp);
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == "Z") 
            answer -= stoi(a[i - 1]);
        else 
            answer += stoi(a[i]);
    }
    return answer;
}
//다시 풀것