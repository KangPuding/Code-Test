#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string a;
    
    for(char s : my_string){
        if(s != ' ')
            a += s;
        else{
         answer.push_back(a);
         a = "";   
        }
    }
        answer.push_back(a);
    return answer;
}